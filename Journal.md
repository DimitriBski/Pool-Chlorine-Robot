---
title: "Pool Chlorine Robot"
author: "DimitriBski"
description: "A robot that tests chlorine levels and adds chlorine to a pool automatically."
created_at: "2025-07-14"
---

What I'm Building:
My plan is to design a robot that automates the task of checking your pool's chlorine levels and adding chlorine to the pool. 
First off, the robot drives up to the edge of the pool. It knows when it stop because the sensor on the front dectecs when the depth of the ground beneath the robot changes. 
Next, the 1st arm of the robot grabs a chlorine strip tester and dips it into the pool. The camera mounted above the axle of the arm will observe the strip. 
Depending on the color of the strip, the robot will decide whether or not to dump chlorine into the pool. 
If it doesn't need chlorine, the robot will pace the strip into the mounded trashcan and drive back to it's orginal parking spot. 
If the pool needs chlorine, the robot will still place the strip into the trash can, but now its going to send a signal to the second arm. 
The second arm will grab the chlorine bottle thats sitting on the designated spot ontop of the robot. It will move the bottle so that its now above the pool. 
Then it will flip the bottle upside down. Next, the upper part of the arm will unscrew the cap and the chlorine will be dumped into the pool. 
Now, the arm will bring the bottle to the trashcan and then the robot will drive back to its designated spot. 

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
