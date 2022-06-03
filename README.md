
# Table of Content
- [Table of Content](#table-of-content)
- [Description of the machine](#description-of-the-machine)
- [How it works](#how-it-works)
- [Materials](#materials)
- [Electronic Schematic](#electronic-schematic)
- [Fusion360 and Real views](#fusion360-and-real-views)
- [Innovative ideas that I was not able to apply in this machine](#innovative-ideas-that-i-was-not-able-to-apply-in-this-machine)
- [What I would do differently](#what-i-would-do-differently)
- [What was learned from this experience](#what-was-learned-from-this-experience)
- [Difficulties experienced](#difficulties-experienced)
- [Project Organization](#project-organization)

# Description of the machine

This machine is designed such that the joystick has full control over raising or lowering the object. Most of the hardware lay at the top of the machine – the breadboard, the Arduino Uno, the ULN-2003 driver and the stepper motor. To ensure that the stepper motor stays fixed onto the machine, instead of using glue or any other means to fix the stepper motor onto the machine, an elastic tie-down was used. The battery and the joystick were taped onto the sides of the machine with electric tape. The pulley was fixed onto the shaft of the stepper motor. However, since the radius of the shaft was much smaller than the radius of the hole located at the center of the pulley, some tape was wrapped around the shaft of the stepper motor to make it fit in the hole located at the center of the pulley. Additionally, some thread was wrapped around the pulley and was attached to a container in which holes were pierced for the string to pass through.

# How it works

This machine is programmed such that the joystick has full control over the rotation of the stepper motor. When the joystick points upwards, the stepper motor will rotate in the counterclockwise direction. Similarly, when the joystick points downwards the stepper motor will rotate in the clockwise direction. Since the pulley is attached to the stepper motor, the rotation of the stepper motor will cause the pulley to rotate in the same direction. Therefore, when the joystick points upwards, the pulley will rotate in the counterclockwise direction. As suggested by Figure 1 when the pulley rotates in the counterclockwise direction, the object will be lifted. Conversely, when the joystick points downwards, the pulley will rotate in the clockwise direction. Again, as suggested by Figure 1, when the pulley rotates in the clockwise direction, the object will be lowered.


<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%201.PNG" width="300" height="400" />
</p>
<p align="center">
Figure 1: Picture showing the direction of motion of the pulley.
</p>


# Materials

- 1 x Arduino Uno
- 1 x USB cable
- 1 x Stepper motor 28BYJ-48
- 1 x ULN2003 Driver
- 1 x Joystick
- 1 x Breadboard
- 1 x 9V battery
- 1 x 9V battery buckle
- 2 x Dupont wires (Male-Male)
- 9 x Dupont wires (Female-Male)
- 1 x Moderately Heavy Object
- 1 x Plastic Container
- 1 x Elastic Tie-Downs
- 1 x Plastic Pulley
- 1 x Vintage Wooden Orange Crate
- Some electric tape
- Some masking tape
- Some thread


# Electronic Schematic
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%202.PNG" width="900" height="500" />
</p>
<p align="center">
Figure 2: Electronic schematic of the machine made using Fritzing.
</p>

# Fusion360 and Real views
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%203.PNG" width="900" height="500" />
</p>
<p align="center">
Figure 3: Fusion360 overall view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%204.PNG" width="300" height="400" />
</p>
<p align="center">
Figure 4: Real overall view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/figure%205.PNG" width="900" height="500" />
</p>
<p align="center">
Figure 5: Fusion360 top view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%206.PNG" width="300" height="400" />
</p>
<p align="center">
Figure 6: Real top view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%207.PNG" width="900" height="500" />
</p>
<p align="center">
Figure 7: Fusion360 side view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%208.PNG" width="300" height="400" />
</p>
<p align="center">
Figure 8: Real side view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%209.PNG" width="900" height="500" />
</p>
<p align="center">
Figure 9: Fusion360 front view of the machine
</p>
<br />
<p align="center">
<img src="https://raw.githubusercontent.com/rajanptl/MiniMotorLiftCrane/main/Picture/Figure%2010.PNG" width="300" height="400" />
</p>
<p align="center">
Figure 10: Real front view of the machine
</p>



# Innovative ideas that I was not able to apply in this machine

Initially, I was planning on making something that resembles a robotic arm. However, even though it sounds very simple to program, I was not able to figure out how to program my machine so that I would be able to mimic a robotic arm. It was too difficult for someone like me that does not have much experience with Arduinos and coding as well. Hence, I had to simplify my machine. Moreover, after simplifying my machine, I was also planning to add a potentiometer to the machine. With the potentiometer, I was planning to control the speed of the stepper motor. However, once again I was not able to figure out how to program my machine so that the potentiometer can change the speed of the stepper motor all while the stepper motor is controlled by the joystick. Hence, I had to give up on this idea.

# What I would do differently

Although this machine ended up functioning the way I envisioned, one thing I would do if I had the chance to go back in time is to 3D print the pulley. The usage of tape to "increase" the radius of the shaft worked out, but I think having a pulley with a hole at the center with the same radius as the shaft would have been better because the pulley would be more fixed. The problem with wrapping tape around the shaft of the stepper motor is that the pulley would not be completely fixed. So, when the machine tried raising something as heavy as my pencil case or even my phone, it would not go as planned. However, if it were raising something moderately heavy like a sharpener or a roll of electric tape, it would work perfectly fine.

# What was learned from this experience 

Throughout this project, I was able to acquire various skills. Amongst the many skills that this project helped me learn, the most notable ones are the following : breadboarding , CADding , coding Arduinos and using electrical components such as potentiometers and servos , and wiring.   

# Difficulties experienced

Throughout the project, I had a lot of trouble with coding and CADding the system. This is partly due to the fact that I did not have a lot of coding and CADding experience beforehand. To overcome these difficulties, I had to access many ressources such as StackOverflow and Youtube. 

# Project Organization 
- [`MiniMotorLiftCrane CAD.stl`](MiniMotorLiftCrane/MiniMotorLiftCrane CAD.stl): AutoCAD FUSION 360 file of this project. 
- [`MiniMotorLiftCrane.ino`](MiniMotorLiftCrane/MiniMotorLiftCrane.ino): Source code of the project. 
