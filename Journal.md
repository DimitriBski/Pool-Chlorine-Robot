---
title: "Pool Chlorine Robot"
author: "DimitriBski"
description: "A robot that tests chlorine levels and adds chlorine to a pool automatically."
created_at: "2025-07-14"
---

What I'm Building:
My plan is to design a robot that automates the task of checking your pool's chlorine levels and adding chlorine to the pool. First off, the robot drives up to the edge of the pool. It knows when it stop because the sensor on the front dectecs when the depth of the ground beneath the robot changes. Next, the 1st arm of the robot grabs a chlorine strip tester and dips it into the pool. The camera mounted above the axle of the arm will observe the strip. Depending on the color of the strip, the robot will decide whether or not to dump chlorine into the pool. If it doesn't need chlorine, the robot will pace the strip into the mounded trashcan and drive back to it's orginal parking spot. If the pool needs chlorine, the robot will still place the strip into the trash can, but now its going to send a signal to the second arm. The second arm will grab the chlorine bottle thats sitting on the designated spot ontop of the robot. It will move the bottle so that its now above the pool. Then it will flip the bottle upside down. Next, the upper part of the arm will unscrew the cap and the chlorine will be dumped into the pool. Now, the arm will bring the bottle to the trashcan and then the robot will drive back to its designated spot. 

DISCLAIMER: I know that there are no motors or wheels in the CAD model I made. The reasoning for this is because of two reasons. The first reason is that I started this project late and didn't have much time to make them. The second reason is I think its unnessasary as I already have the mounting brackets showing where the motors will be. As for the wheels, there is no motor for them to attach to so I just didnt make them.

Parts Needed:

Aluminium (For the Frame)

DC Gear Motors 2x

Servo Motors 4x

Wheels 4x

Voltage Regulator 1x

Motor Driver 1x

Arduino Board 1x

Power Bank 20,000mah 1x

16 Gauge Wire 15 ft Roll 1x

Arduino Color Sensor 1x

3d Printer w/ filament

Screws and bolts

Time Spent: 10 Hours

Day 1 7/13/25:
This is the first day that I started my project. I only have 2.5 weeks to submit my designs so I started working. 
First off, before I cadded anything, I designed what I wanted my robot to look like on paper first. I drew different angles of it to referance for my CAD model later. Heres my original design:

<img width="558" height="425" alt="Screenshot 2025-07-13 190317" src="https://github.com/user-attachments/assets/8851a367-5e4f-4001-9ea5-07eec8e3a6e3" />

After I had an idea of what it's going to look like, I started CADing the base and arms in solidworks. For now, im just using a basic rectange for the base but I will make it more detailed later. I sucessfuly made the first arm that picks up the strips and dips them. One problem I had with this is that based off my original design, the arm was too short and wouldn't be able to reach the pool. So I made it 4in longer and now it can reach. For the second arm, it was a bit more dificult to design because of all the different ways that it turns. So I thought to make the whole arm rotate 360". With that out of the way, I reused part 1 of the 1st arm I made for the strips originaly. I had to modify it a bit but now it fits great. Now I just need to figure out how im going to make the part of the arm that holds the bottle hold it tightly without it falling out of the grip.
Here's what I have so far:

<img width="789" height="471" alt="Screenshot 2025-07-14 113026" src="https://github.com/user-attachments/assets/9e6b7d80-6d26-4538-93e1-2c22c2fbf0d6" />

Day 2 7/14/25:
So today I had a new issue that I didnt have time ti fix yeasterday. When the first arm (Arm that picks up strips) goes to pick up a strip, it cant grab them because I made the arm longer. My solution to this is to add an axle right at the end of the arm so that the pinchers on the end act like a hand and the axle acts as a wrist. 

<img width="789" height="427" alt="Screenshot 2025-07-14 134926" src="https://github.com/user-attachments/assets/bbc4e759-200c-4d7f-b43e-c875669b1921" />

Solution:

<img width="317" height="257" alt="Screenshot 2025-07-14 140828" src="https://github.com/user-attachments/assets/05046bb0-8019-4673-a663-14d244f7eaad" />

With this fix, it has created a new problem of the strips being to far off to the side. To fix this, I simply measure the distance between the pinchers and the center of the strips, and make them centered with one another.

<img width="655" height="428" alt="Screenshot 2025-07-14 143656" src="https://github.com/user-attachments/assets/0b332710-92af-4342-8339-bf39206af1f5" />

Now that the problem was solved, I decided to continue working on the second arm. I made the second part of the arm but i relized the arm is already too long so i decided to make the first part of the arm shorter by 2 in. This worked pretty well. Next, I started to make the claw that holds the bottle. 
Here are photos of all the parts I made for the claw:

<img width="267" height="197" alt="Screenshot 2025-07-14 160221" src="https://github.com/user-attachments/assets/849d3cb1-b497-4e0f-b2c2-e0af718780da" />
<img width="278" height="258" alt="Screenshot 2025-07-14 160240" src="https://github.com/user-attachments/assets/a63946a5-e3e6-4583-80dd-f5b985167145" />
<img width="488" height="353" alt="Screenshot 2025-07-14 160551" src="https://github.com/user-attachments/assets/c135d49a-98db-4ae9-b297-7abd8410991d" />

Day 3 7/15/25
I was unable to work today since I was very busy.

Day 4 7/16/25
I decided to add another layer where all the wires would feed down to the ardino. The reason I decided to make a second layer was because it I had put the ardino next to the arms, it would be more prone to damage. 

Day 5-13 7/17/25 - 7/25/25
I started to work on coding the robot. First, i needed to figure out what language I was going to use as I mainly use python. I figured out that for programing arduinos I need to use C++ language. But before I could start any of the coding, I learned that It would be inpossible to power all 10 motors directly from the arduino. This means I can connect them to the arduino for signals but not for power. So they will all need an external power source. And I have also not determined a power source for thr robot yet. But then I remembered that I have a power bank. So I caan use my 20000mah power bank to power the whole robot. Another problem I ran into though is that I will most likely need a voltage regulator as the voltage wont match from the motors and arduino to the powerbank. Here is the code I wrote so far:
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

  // Motor pins
  pinMode(L_MOTOR_IN1, OUTPUT);
  pinMode(L_MOTOR_IN2, OUTPUT);
  pinMode(R_MOTOR_IN3, OUTPUT);
  pinMode(R_MOTOR_IN4, OUTPUT);
  pinMode(CAMERA_TRIGGER_PIN, OUTPUT);
  digitalWrite(CAMERA_TRIGGER_PIN, LOW);

  pwm.begin();
  pwm.setPWMFreq(50); // 50Hz for servos

  if (!colorSensor.begin()) {
    Serial.println("Color sensor not found!");
    while (1);
  }

  Serial.println("Robot Starting...");
}

void loop() {
  // Step 1: Move forward
  driveForward(150);
  delay(2000);
  stopMotors();

  // Step 2: Dip strip with first arm
  dipTestStrip();

  // Step 3: Trigger ESP32-CAM to take photo
  triggerCamera();

  // Step 4: Read chlorine color from strip
  delay(1000); // wait for lighting to stabilize
  float r, g, b;
  colorSensor.getRGB(&r, &g, &b);

  Serial.print("RGB: ");
  Serial.print(r); Serial.print(", ");
  Serial.print(g); Serial.print(", ");
  Serial.println(b);

  // Step 5: Compare RGB to chlorine threshold
  if (isChlorineLow(r, g, b)) {
    Serial.println("Low chlorine detected. Dispensing...");
    dispenseChlorine();
  } else {
    Serial.println("Chlorine level OK.");
  }

  while (true); // Stop here after 1 cycle
}

// ================= Movement =================
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

// ================= Arm Controls =================
void dipTestStrip() {
  pwm.setPWM(ARM1_BASE, 0, angleToPulse(90));
  delay(500);
  pwm.setPWM(ARM1_ELBOW, 0, angleToPulse(120));
  delay(1000);
  pwm.setPWM(ARM1_WRIST, 0, angleToPulse(150));
  delay(3000); // wait for dip
  pwm.setPWM(ARM1_WRIST, 0, angleToPulse(90)); // retract
  delay(500);
}

// ================= Chlorine Logic =================
bool isChlorineLow(float r, float g, float b) {
  // Simple threshold – tune based on test strip readings
  return (r > 160 && g < 100 && b < 80);  // Low chlorine: more red
}

void dispenseChlorine() {
  pwm.setPWM(ARM2_BASE, 0, angleToPulse(90));
  delay(500);
  pwm.setPWM(ARM2_ELBOW, 0, angleToPulse(110));
  delay(800);
  pwm.setPWM(ARM2_DISPENSER, 0, angleToPulse(160)); // Pour
  delay(1500);
  pwm.setPWM(ARM2_DISPENSER, 0, angleToPulse(90)); // Reset
  delay(500);
}

// ================= Camera Trigger =================
void triggerCamera() {
  digitalWrite(CAMERA_TRIGGER_PIN, HIGH);
  delay(300);
  digitalWrite(CAMERA_TRIGGER_PIN, LOW);
  Serial.println("Camera triggered.");
}

// ================= Helpers =================
int angleToPulse(int angle) {
  int pulse = map(angle, 0, 180, 102, 512);  // Map angle to PCA9685 pulse
  return pulse;
}


Day 14 7/26/25
Today I made the mount for the color sensor. I placed it ontop of the 1st arm base so that it has a clear shot of the strip when it is brought up. 
<img width="239" height="406" alt="Screenshot 2025-07-26 145223" src="https://github.com/user-attachments/assets/d0fba385-44eb-473f-8d2c-bde80f2bc20e" />

Day 15-17 7/27/25 - 7/29/25
For the past 3 days, I've basically been going through all my documentation and CAD files to makes sure that everything meest the criteria and that everything is how I want it before my final submission. The only thing I really added was my parts list. 
