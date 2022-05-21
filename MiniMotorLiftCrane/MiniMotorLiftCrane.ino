// Include Stepper library.
#include <Stepper.h>
// Define a parameter called steps and assign it the value 32.
#define steps 32
// Define the stepper motor’s control pins.
#define I1 7
#define I2 6
#define I3 5
#define I4 4
// Create an instance of the Stepper class that defines the stepper motor controlled by the Arduino.
Stepper stepper(steps, I4, I2, I3, I1);
// Connects Joystick output to analog A0 on the Arduino.
#define joystick A0
void setup()
{
}
void loop()
{
// Read the analog value from the joystick.
int val = analogRead(joystick);
// If the joystick is in the middle, the stepper motor will stop.
if( (val > 500) && (val < 523) )
{
//When the joystick is in the middle, the stepper motor’s control pins will have a LOW value. Hence, the
stepper motor will not move.
digitalWrite(I1, LOW);
digitalWrite(I2, LOW);
digitalWrite(I3, LOW);
digitalWrite(I4, LOW);
}
else
{
// Move the stepper motor in the first direction.
while (val >= 523)
{
// Map the speed of the stepper motor to between 5 and 500 rpm.
int speed_ = map(val, 523, 1023, 5, 500);
// Set the speed of the stepper motor.
stepper.setSpeed(speed_);
// Move the stepper motor (1 step).
stepper.step(1);
//Read the analog value from the joystick.
val = analogRead(joystick);
}
// Move the stepper motor in the other direction.
while (val <= 500)
{
// Map the speed of the stepper motor to between 5 and 500 rpm.
int speed_ = map(val, 500, 0, 5, 500);
// Set the speed of the stepper motor.
stepper.setSpeed(speed_);
// Move the stepper motor (1 step).
stepper.step(-1);
//Read the analog value from the joystick.
val = analogRead(joystick);
}
}
}
