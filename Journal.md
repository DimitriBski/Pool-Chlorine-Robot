
  <h1>Pool Chlorine Robot</h1>
  <p><strong>Author:</strong> DimitriBski</p>
  <p><strong>Description:</strong> A robot that tests chlorine levels and adds chlorine to a pool automatically.</p>
  <p><strong>Created:</strong> July 14, 2025</p>
  <p><strong>Total Time Spent:</strong> 10 hours</p>

  <h2>What I'm Building</h2>
  <p>
My plan is to design a robot that automates the task of checking your pool's chlorine levels and adding chlorine to the pool. First off, the robot drives up to the edge of the pool. It knows when it stop because the sensor on the front dectecs when the depth of the ground beneath the robot changes. Next, the 1st arm of the robot grabs a chlorine strip tester and dips it into the pool. The camera mounted above the axle of the arm will observe the strip. Depending on the color of the strip, the robot will decide whether or not to dump chlorine into the pool. If it doesn't need chlorine, the robot will pace the strip into the mounded trashcan and drive back to it's orginal parking spot. If the pool needs chlorine, the robot will still place the strip into the trash can, but now its going to send a signal to the second arm. The second arm will grab the chlorine bottle thats sitting on the designated spot ontop of the robot. It will move the bottle so that its now above the pool. Then it will flip the bottle upside down. Next, the upper part of the arm will unscrew the cap and the chlorine will be dumped into the pool. Now, the arm will bring the bottle to the trashcan and then the robot will drive back to its designated spot. 
  </p>

  <h2>Parts Needed</h2>
  <ul>
    <li>Aluminum (frame)</li>
    <li>DC Gear Motors (x2)</li>
    <li>Servo Motors (x4)</li>
    <li>Wheels (x4)</li>
    <li>Voltage Regulator (x1)</li>
    <li>Motor Driver (x1)</li>
    <li>Arduino Board (x1)</li>
    <li>Power Bank 20,000mAh (x1)</li>
    <li>16 Gauge Wire - 15ft roll (x1)</li>
    <li>Arduino Color Sensor (x1)</li>
    <li>3D Printer & Filament</li>
    <li>Screws and bolts</li>
  </ul>

  <h2>Day 1 - July 13, 2025</h2>
  <p><strong>Time spent:</strong> 3 hours</p>
  <p>Sketched ideas on paper and started CAD modeling the base and arms in SolidWorks. Extended the first arm by 4 inches to reach the pool. Designed the rotating mechanism for the second arm and modified reused parts.</p>
  <img src="https://github.com/user-attachments/assets/8851a367-5e4f-4001-9ea5-07eec8e3a6e3" alt="Sketch">
  <img src="https://github.com/user-attachments/assets/9e6b7d80-6d26-4538-93e1-2c22c2fbf0d6" alt="First Arm CAD">

  <h2>Day 2 - July 14, 2025</h2>
  <p><strong>Time spent:</strong> 2 hours</p>
  <p>Fixed grabbing issue by adding a wrist axle and realigned the pinchers. Adjusted arm lengths and started modeling the bottle claw mechanism.</p>
  <img src="https://github.com/user-attachments/assets/bbc4e759-200c-4d7f-b43e-c875669b1921" alt="Wrist Fix">
  <img src="https://github.com/user-attachments/assets/05046bb0-8019-4673-a663-14d244f7eaad" alt="Wrist Axle">
  <img src="https://github.com/user-attachments/assets/0b332710-92af-4342-8339-bf39206af1f5" alt="Strip Alignment">
  <img src="https://github.com/user-attachments/assets/849d3cb1-b497-4e0f-b2c2-e0af718780da" alt="Claw 1">
  <img src="https://github.com/user-attachments/assets/a63946a5-e3e6-4583-80dd-f5b985167145" alt="Claw 2">
  <img src="https://github.com/user-attachments/assets/c135d49a-98db-4ae9-b297-7abd8410991d" alt="Claw 3">

  <h2>Day 3 - July 15, 2025</h2>
  <p><strong>Time spent:</strong> 0 hours</p>
  <p>Busy today. No progress.</p>

  <h2>Day 4 - July 16, 2025</h2>
  <p><strong>Time spent:</strong> 1 hour</p>
  <p>Added a second layer for safer Arduino mounting and better wire routing.</p>

  <h2>Days 5–13 - July 17–25, 2025</h2>
  <p><strong>Time spent:</strong> 3 hours</p>
  <p>Started firmware in C++ after learning Arduino needs it. Resolved motor power issues with plan to use power bank and voltage regulator. Wrote initial drive, dip, read, and dispense logic.</p>

  <pre><code>// Example from the code:
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
  </code></pre>

  <h2>Day 14 - July 26, 2025</h2>
  <p><strong>Time spent:</strong> 0.5 hours</p>
  <p>Mounted color sensor above first arm’s base for better line-of-sight with the strip.</p>
  <img src="https://github.com/user-attachments/assets/d0fba385-44eb-473f-8d2c-bde80f2bc20e" alt="Color Sensor Mount">

  <h2>Days 15–17 - July 27–29, 2025</h2>
  <p><strong>Time spent:</strong> 0.5 hours</p>
  <p>Final review of documentation, CAD, and added final parts list.</p>

</body>
</html>
