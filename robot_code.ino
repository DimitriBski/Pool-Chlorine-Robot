/* Arduino robot code here */
#include <Wire.h>
#include <Adafruit_TCS34725.h>
#include <Adafruit_PWMServoDriver.h>
#define L_MOTOR_IN1 8
#define L_MOTOR_IN2 7
#define R_MOTOR_IN3 4
#define R_MOTOR_IN4 5
#define L_MOTOR_PWM 9
#define R_MOTOR_PWM 3


#define CAMERA_TRIGGER_PIN 2


// Servo channels on PCA9685
#define ARM1_BASE 0
#define ARM1_ELBOW 1
#define ARM1_WRIST 2
#define ARM2_BASE 3
#define ARM2_ELBOW 4
#define ARM2_DISPENSER 5


Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
Adafruit_TCS34725 colorSensor = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);


void setup() {
Serial.begin(9600);


pinMode(L_MOTOR_IN1, OUTPUT);
pinMode(L_MOTOR_IN2, OUTPUT);
pinMode(R_MOTOR_IN3, OUTPUT);
pinMode(R_MOTOR_IN4, OUTPUT);
pinMode(CAMERA_TRIGGER_PIN, OUTPUT);
digitalWrite(CAMERA_TRIGGER_PIN, LOW);


pwm.begin();
pwm.setPWMFreq(50);


if (!colorSensor.begin()) {
Serial.println("Color sensor not found!");
while (1);
}


Serial.println("Robot Starting...");
}


void loop() {
driveForward(150);
delay(2000);
stopMotors();


dipTestStrip();
triggerCamera();


delay(1000);
float r, g, b;
colorSensor.getRGB(&r, &g, &b);


Serial.print("RGB: ");
Serial.print(r); Serial.print(", ");
Serial.print(g); Serial.print(", ");
Serial.println(b);


if (isChlorineLow(r, g, b)) {
Serial.println("Low chlorine detected. Dispensing...");
dispenseChlorine();
} else {
Serial.println("Chlorine level OK.");
}


while (true);
}


// Movement
void driveForward(int speed) {
digitalWrite(L_MOTOR_IN1, HIGH);
digitalWrite(L_MOTOR_IN2, LOW);
analogWrite(L_MOTOR_PWM, speed);
digitalWrite(R_MOTOR_IN3, HIGH);
digitalWrite(R_MOTOR_IN4, LOW);
analogWrite(R_MOTOR_PWM, speed);
}


void stopMotors() {
digitalWrite(L_MOTOR_IN1, LOW);
digitalWrite(L_MOTOR_IN2, LOW);
digitalWrite(R_MOTOR_IN3, LOW);
digitalWrite(R_MOTOR_IN4, LOW);
}


// Arm
void dipTestStrip() {
pwm.setPWM(ARM1_BASE, 0, angleToPulse(90));
delay(500);
pwm.setPWM(ARM1_ELBOW, 0, angleToPulse(120));
delay(1000);
pwm.setPWM(ARM1_WRIST, 0, angleToPulse(150));
delay(3000);
pwm.setPWM(ARM1_WRIST, 0, angleToPulse(90));
delay(500);
}


bool isChlorineLow(float r, float g, float b) {
return (r > 160 && g < 100 && b < 80);
}


void dispenseChlorine() {
pwm.setPWM(ARM2_BASE, 0, angleToPulse(90));
delay(500);
pwm.setPWM(ARM2_ELBOW, 0, angleToPulse(110));
delay(800);
pwm.setPWM(ARM2_DISPENSER, 0, angleToPulse(160));
delay(1500);
pwm.setPWM(ARM2_DISPENSER, 0, angleToPulse(90));
delay(500);
}


void triggerCamera() {
digitalWrite(CAMERA_TRIGGER_PIN, HIGH);
delay(300);
digitalWrite(CAMERA_TRIGGER_PIN, LOW);
Serial.println("Camera triggered.");
}


int angleToPulse(int angle) {
return map(angle, 0, 180, 102, 512);
}