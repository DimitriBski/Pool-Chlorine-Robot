<body>
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
    <li>Aluminium (For the Frame)</li>
    <li>DC Gear Motors 2x</li>
    <li>Servo Motors 4x</li>
    <li>Wheels 4x</li>
    <li>Voltage Regulator 1x</li>
    <li>Motor Driver 1x</li>
    <li>Arduino Board 1x</li>
    <li>Power Bank 20,000mah 1x</li>
    <li>16 Gauge Wire 15 ft Roll 1x</li>
    <li>Arduino Color Sensor 1x</li>
    <li>3d Printer w/ filament</li>
    <li>Screws and bolts</li>
  </ul>

  <h2>Day 1 - July 13, 2025</h2>
  <p>This is the first day that I started my project. I only have 2.5 weeks to submit my designs so I started working.
  First off, before I cadded anything, I designed what I wanted my robot to look like on paper first. I drew different angles of it to referance for my CAD model later. Heres my original design:</p>
  <img src="https://github.com/user-attachments/assets/8851a367-5e4f-4001-9ea5-07eec8e3a6e3" alt="Screenshot 2025-07-13 190317">
  <p>After I had an idea of what it's going to look like, I started CADing the base and arms in solidworks. For now, im just using a basic rectange for the base but I will make it more detailed later. I sucessfuly made the first arm that picks up the strips and dips them. One problem I had with this is that based off my original design, the arm was too short and wouldn't be able to reach the pool. So I made it 4in longer and now it can reach. For the second arm, it was a bit more dificult to design because of all the different ways that it turns. So I thought to make the whole arm rotate 360". With that out of the way, I reused part 1 of the 1st arm I made for the strips originaly. I had to modify it a bit but now it fits great. Now I just need to figure out how im going to make the part of the arm that holds the bottle hold it tightly without it falling out of the grip.
  Here's what I have so far:</p>
  <img src="https://github.com/user-attachments/assets/9e6b7d80-6d26-4538-93e1-2c22c2fbf0d6" alt="Screenshot 2025-07-14 113026">

  <h2>Day 2 - July 14, 2025</h2>
  <p>So today I had a new issue that I didnt have time ti fix yeasterday. When the first arm (Arm that picks up strips) goes to pick up a strip, it cant grab them because I made the arm longer. My solution to this is to add an axle right at the end of the arm so that the pinchers on the end act like a hand and the axle acts as a wrist.</p>
  <img src="https://github.com/user-attachments/assets/bbc4e759-200c-4d7f-b43e-c875669b1921" alt="Screenshot 2025-07-14 134926">
  <p>Solution:</p>
  <img src="https://github.com/user-attachments/assets/05046bb0-8019-4673-a663-14d244f7eaad" alt="Screenshot 2025-07-14 140828">
  <p>With this fix, it has created a new problem of the strips being to far off to the side. To fix this, I simply measure the distance between the pinchers and the center of the strips, and make them centered with one another.</p>
  <img src="https://github.com/user-attachments/assets/0b332710-92af-4342-8339-bf39206af1f5" alt="Screenshot 2025-07-14 143656">
  <p>Now that the problem was solved, I decided to continue working on the second arm. I made the second part of the arm but i relized the arm is already too long so i decided to make the first part of the arm shorter by 2 in. This worked pretty well. Next, I started to make the claw that holds the bottle.
  Here are photos of all the parts I made for the claw:</p>
  <img src="https://github.com/user-attachments/assets/849d3cb1-b497-4e0f-b2c2-e0af718780da" alt="Screenshot 2025-07-14 160221">
  <img src="https://github.com/user-attachments/assets/a63946a5-e3e6-4583-80dd-f5b985167145" alt="Screenshot 2025-07-14 160240">
  <img src="https://github.com/user-attachments/assets/c135d49a-98db-4ae9-b297-7abd8410991d" alt="Screenshot 2025-07-14 160551">

  <h2>Day 3 - July 15, 2025</h2>
  <p>I was unable to work today since I was very busy.</p>

  <h2>Day 4 - July 16, 2025</h2>
  <p>I decided to add another layer where all the wires would feed down to the ardino. The reason I decided to make a second layer was because it I had put the ardino next to the arms, it would be more prone to damage.</p>

  <h2>Day 5-13 - July 17–25, 2025</h2>
  <p>I started to work on coding the robot. First, i needed to figure out what language I was going to use as I mainly use python. I figured out that for programing arduinos I need to use C++ language. But before I could start any of the coding, I learned that It would be inpossible to power all 10 motors directly from the arduino. This means I can connect them to the arduino for signals but not for power. So they will all need an external power source. And I have also not determined a power source for thr robot yet. But then I remembered that I have a power bank. So I caan use my 20000mah power bank to power the whole robot. Another problem I ran into though is that I will most likely need a voltage regulator as the voltage wont match from the motors and arduino to the powerbank. 

  <h2>Day 14 - July 26, 2025</h2>
  <p>Today I made the mount for the color sensor. I placed it ontop of the 1st arm base so that it has a clear shot of the strip when it is brought up.</p>
  <img src="https://github.com/user-attachments/assets/d0fba385-44eb-473f-8d2c-bde80f2bc20e" alt="Screenshot 2025-07-26 145223">

  <h2>Day 15-17 - July 27–29, 2025</h2>
  <p>For the past 3 days, I've basically been going through all my documentation and CAD files to makes sure that everything meest the criteria and that everything is how I want it before my final submission. The only thing I really added was my parts list.</p>

 <h2>Day 18 - July 30, 2025</h2>
  <p>Today is the 2nd to last day before my project is due. I went to submit my project but I was told that my journal needs to be formatted correctly, I need to add electronics and motors into my CAD assembly, and I need a README and a step file of my CAD. So today, I finished working on my Cad model. Next, I needed to make a readme. So I reasearched how to make it and followed the instructions. Now all I need to do is make my CAD model into a step file and make a 

 <h2>Day 19 - July 31, 2025</h2>
  <p>Today is the last day to submit the prject. All of the files are completed and ready to submit. So all I have to do now is submit it.
</body>
</html>
