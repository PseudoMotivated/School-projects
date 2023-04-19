#include <Servo.h>               // Can't use a servo without the servo lib.

#define servoPin 10              // Save on headaches, and for easily changing pins.

Servo myServo;                   // Inits a servo object

void setup(){
  myServo.attach(servoPin);      // Just like pinMode(OUTPUT). Also makes the lib know that that is the pin the servo uses.
  myServo.write(90);             // Puts the servo in a staring position. 
}

void loop(){                     // Makes a servo rotate back and forth 180 degrees repeatedtly

  myServo.write(0);              // Tells the servo to rotate to the 0 degree position.
  delay(440);                   // Gives the servo time to rotate. 

  myServo.write(180);            // Tells the servo to rotate to the 180 degree position.
  delay(440);                   // Gives the servo time to rotate before looping. 
}
