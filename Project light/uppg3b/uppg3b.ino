//Using the protothread library to simulate multithreading, since arduino doesnt support it, if youre going to adapt this code, DONT USE DELAYS EVER
#include <pt.h>
#define green 8
#define red 7 //Using define in this code because it looks neater. 


// Declaring 2 protothreads named pt1 and pt2
struct pt pt1; 
struct pt pt2; // The pt struct is in the library of protothreads. 

// First protothread function to blink the green led every 1 second
void protothreadBlinkGreen(struct pt *pt){ //Takes a protothread as an argument. This acts as a pointer directing the the pt name taken as an argument to the pt struct. 
// PT_WAIT_UNTIL and milis are what allow for simulated multithreading as they allow the pausing of a 
// function without using delay and stopping everything that is happening.
  static unsigned long LastBlinkTime = 0; //Note: due to limitations of not having infinite memory,
  // one has to restart the micro controller every 49 days to avoid possible errors with the millis function
  
  PT_BEGIN(pt); // Uses the protothread that was passed as an argument and begins it. Runs the funtion inside of it.
  while(1) { // Makes the function loop forever.
    LastBlinkTime = millis(); // Saves the time the function was started in a variable.
    PT_WAIT_UNTIL(pt, millis() - LastBlinkTime > 1000); // How long the led should stay off for. Pauses the function until a second has passed. The other function is running in the meanwhile.
    digitalWrite(green, HIGH); // Once a second has passed the Led get turned on.
    LastBlinkTime = millis(); // Reassigns the variable value, saving the time the led was turned on.
    PT_WAIT_UNTIL(pt, millis() - LastBlinkTime > 1000); // How long the led should stay on for.
    //Pauses the function and checks the timer until a second has passed since the led has been turned on.
    digitalWrite(green, LOW); // Turns the led off once a second has passed. 
  } // Everything between this curly bracket and the one that closes it above (by while()) will be looped forever since there is no condition that calls PT_EXIT().
  PT_END(pt); // Declares the end of the function.
} // End of protothreadBlinkGreen()

// Second protothread function to blink the red every 0.5 second
void protothreadBlinkRed(struct pt *pt){ // This is just the same as the previous function just with different timings and variable names. 

  static unsigned long LastBlinkTime = 0; // Using unsigned long because this number can get very biiig. This also gets executed when the protothread begins.
  PT_BEGIN(pt);
  while(1) {
    LastBlinkTime = millis();
    PT_WAIT_UNTIL(pt, millis() - LastBlinkTime > 500); // How long the led should stay off for.
    digitalWrite(red, HIGH);
    LastBlinkTime = millis();
    PT_WAIT_UNTIL(pt, millis() - LastBlinkTime > 500); // How long the led should stay on for. 
    digitalWrite(red, LOW);
  }
  PT_END(pt);
}
s
// In setup, set all LEDs as OUTPUT, and
// init all protothreads
void setup() {
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  PT_INIT(&pt1); //Initializes the protothread called pt1
  PT_INIT(&pt2); //Initializes the protothread called pt2

}

// In the loop we just need to call the protothreads one by one
void loop() {
  // Starts the funtions, theyre each using their own protothread
  protothreadBlinkRed(&pt1); // Passes which protothread we want them to use as an argument.
  protothreadBlinkGreen(&pt2); 

}
