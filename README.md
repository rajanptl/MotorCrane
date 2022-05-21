# Table of Content
- [Table of Content](#table-of-content)
- [Description of the machine](#description-of-the-machine)
- [How it works](#how-it-works)
- [Materials](#materials)
- [Electronic Schematic](#electronic-schematic)

# Description of the machine

This machine is designed such that the joystick has full control over raising or lowering the object. Most of the hardware lay at the top of the machine – the breadboard, the Arduino Uno, the ULN-2003 driver and the stepper motor. To ensure that the stepper motor stays fixed onto the machine, instead of using glue or any other means to fix the stepper motor onto the machine, an elastic tie-down was used. The battery and the joystick were taped onto the sides of the machine with electric tape. The pulley was fixed onto the shaft of the stepper motor. However, since the radius of the shaft was much smaller than the radius of the hole located at the center of the pulley, some tape was wrapped around the shaft of the stepper motor to make it fit in the hole located at the center of the pulley. Additionally, some thread was wrapped around the pulley and was attached to a container in which holes were pierced for the string to pass through.

# How it works

This machine is programmed such that the joystick has full control over the rotation of the stepper motor. When the joystick points upwards, the stepper motor will rotate in the counterclockwise direction. Similarly, when the joystick points downwards the stepper motor will rotate in the clockwise direction. Since the pulley is attached to the stepper motor, the rotation of the stepper motor will cause the pulley to rotate in the same direction. Therefore, when the joystick points upwards, the pulley will rotate in the counterclockwise direction. As suggested by Figure 1 when the pulley rotates in the counterclockwise direction, the object will be lifted. Conversely, when the joystick points downwards, the pulley will rotate in the clockwise direction. Again, as suggested by Figure 1, when the pulley rotates in the clockwise direction, the object will be lowered.



# Materials

# Electronic Schematic
