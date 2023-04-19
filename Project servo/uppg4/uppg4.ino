#include <Servo.h>               // Can't use a servo without the servo lib.

#define servoPin 10              // Save on headaches, and for easily changing pins.
#define blueLEDPin 7
#define whiteLEDPin 6
Servo myServo;                   // Inits a servo object

void setup(){
  myServo.attach(servoPin);      // Just like pinMode(OUTPUT). Also makes the lib know that that is the pin the servo uses.
  myServo.write(90);             // Puts the servo in a staring position. 
  pinMode(blueLEDPin, OUTPUT);
  pinMode(whiteLEDPin, OUTPUT);  // These two set the pins of the LEDs to outputs. 
}

void loop(){                     // Makes a servo rotate back and forth 180 degrees repeatedtly

  myServo.write(0);              // Tells the servo to rotate to the 0 degree position.
  delay(440);                    // Gives the servo time to rotate. 
  digitalWrite(blueLEDPin, HIGH); // Turn the blue LED on. 
  delay(500);                     // Pauses the program so the light has time to make itself visible 
  digitalWrite(blueLEDPin, LOW); // Turn the blue LED off.

  myServo.write(180);            // Tells the servo to rotate to the 180 degree position.
  delay(440);                    // Gives the servo time to rotate. 
  digitalWrite(whiteLEDPin, HIGH); // Turn the white LED on. 
  delay(500);                    // Pauses the program so the light has time to make itself visible 
  digitalWrite(whiteLEDPin, LOW); // Turn the white LED off before looping
}
