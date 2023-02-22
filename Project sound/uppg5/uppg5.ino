// This program just makes a simple speaker sound at a frequency, in this case 440 hz. 

//-------------------------------------------------------
// #define NOTE_C5  523
// #define NOTE_CS5 554
// #define NOTE_D5  587
// #define NOTE_DS5 622
// #define NOTE_E5  659
// #define NOTE_F5  698
// #define NOTE_FS5 740
// #define NOTE_G5  784
// #define NOTE_GS5 831
// #define NOTE_A5  880
// #define NOTE_AS5 932
// #define NOTE_B5  988
// This is a list of notes mapped to frequencies i stole off the arduino website. 
// Just to make my life a little easier.
//------------------------------------------------------

// beginning state of the led switching function
bool led_state = false;


// If you're going to use this program for your own and want to change the pins
// this is where you want to change some parameters
/////////////////////////////////////////////////////////////////////////////
// Tells the program to switch every place speaker is for the defined argument at compilation.
#define speaker 12

// These are the pins the white and blue leds are connected to. 
#define white 8
#define blue 7
///////////////////////////////////////////////////////////////////////////



/////////////////////////////////

void switch_led(){      // A simple function to toggle between two leds. 
  if (led_state == false){ // If the boolean is 
                          // FALSE the white led is on and blue is off.
    digitalWrite(white, HIGH);
    digitalWrite(blue, LOW);
    led_state = true; // toggles bool
  }
  else{                   // If the boolean is TRUE then blue is on 
                          // And white is turned off. 
    digitalWrite(blue, HIGH);
    digitalWrite(white, LOW);
    led_state = false; // toggles bool
  }
}

////////////////////////////////

// Function that takes a tone and some time as arguments and uses them in tone().
// The length argument MUST be an integer (or longs)
// Length argument is in milliseconds
// The passed tone argument must be a string/char, ie inside quotation marks.
void playTone(const char *note, long length){
// This is damn long if-chain to just map the passed tone argument to the appropriate frequency.
  

  if (note == "A"){
    tone(speaker, 880, length); // Plays A in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----  
  if (note == "B"){
    tone(speaker, 988, length); // Plays B in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "C"){
    tone(speaker, 523, length); // Plays C in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "D"){
    tone(speaker, 587, length); // Plays D in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
  if (note == "E"){
    tone(speaker, 659, length); // Plays E in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "F"){
    tone(speaker, 698, length); // Plays F in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "G"){
    tone(speaker, 784, length); // Plays G in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }

}

//////////////////////////////////////////////////

// This is exactly the same as the playTone() function
// except it also toggles the led that is on after playing a tone.
void playToneAndSwitchLED(const char *note, long length){
// This is damn long if-chain to just map the passed tone argument to the appropriate frequency.
  if (note == "A"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 880, length); // Plays A in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 

  }
//-----  
  if (note == "B"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 988, length); // Plays B in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 

  }
//-----
  if (note == "C"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 523, length); // Plays C in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "D"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 587, length); // Plays D in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "E"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 659, length); // Plays E in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 

  }
//-----
  if (note == "F"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 698, length); // Plays F in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----
  if (note == "G"){
    switch_led(); // Toggles the led that is on.
    tone(speaker, 784, length); // Plays G in fifth octave.
    delay(length); // Then delays as long as the tone plays so it has time to finish. 
  }
//-----

}
///////////////////////////////////////////////////////////////

void bjornen_sover(){

  playTone("C", 1500);

  playToneAndSwitchLED("E", 500);

  playToneAndSwitchLED("D", 1500);

  playToneAndSwitchLED("F", 500);

  playToneAndSwitchLED("E", 1000);

  playToneAndSwitchLED("D", 1000);

  playToneAndSwitchLED("C", 1000);
  delay(1000);


  playToneAndSwitchLED("E", 2000);

  playToneAndSwitchLED("G", 1000);

  playToneAndSwitchLED("F", 1000);

  playToneAndSwitchLED("D", 2000);

  playToneAndSwitchLED("F", 1000); 

  playToneAndSwitchLED("E", 1000);


  playToneAndSwitchLED("C", 1500);

  playToneAndSwitchLED("E", 500);

  playToneAndSwitchLED("D", 1500);

  playToneAndSwitchLED("F", 500);

  playToneAndSwitchLED("E", 1000); 

  playToneAndSwitchLED("D", 1000); 

  playToneAndSwitchLED("C", 1000); 

  delay(1000);
  
}



//void bjornen_sover(){ // This is also deprecated. 
//  // Plays bjornen sover on a speaker. 
//  // Also toggles which led is on. 
//
//  tone(speaker, NOTE_C5, 1000);
//  delay(1000);
//
//  tone(speaker, NOTE_G5, 1000);
//  delay(1000);
//playTone(2, 89);
//  tone(speaker, NOTE_C5, 500);
//  delay(500);
//
//  tone(speaker, NOTE_G5, 500);
//  delay(500);
//
//  delay(500);
//
//  tone(speaker, NOTE_C5, 1000);
//  delay(1000);
//
//  tone(speaker, NOTE_G5, 1000);
//  delay(1000);
///////
//
//  tone(speaker, NOTE_G5, 1000);
//  delay(1000);
// higlight it all and use ctrl + /
//void bjornen_sover() { // This is deprecated
//  //Plays bjornen sover melody on a speaker. And turns two leds on and off. 
//  
//  // Calls the switch_led() function to toggle which led is on.
//  switch_led();
//  
//  // Makes the speaker sound for half a second at a frequency of 392hz 
//  // Delay for half a second to make sure that the speaker sounds for a second 
//  // before the next tone.
//  tone(speaker, 392, 500); 
//  delay(500);
//
//  // Calls the switch_led() function to toggle which led is on.
//  switch_led();
//
//  // Same thing again 
//  tone(speaker, 392, 500);
//  delay(500);
//
//  // Calls the switch_led() function to toggle which led is on.
//  switch_led();
//
//  // Makes the speaker sound for half a second at a frequency of 587hz s
//  // Delay for half a second to make sure that the speaker sounds for a second before 
//  // the next tone. 
//  tone(speaker, 587, 500);
//  delay(500);
//
//  // Calls the switch_led() function to toggle which led is on.
//  switch_led();
//
//
//  //Same thing again
//  tone(speaker, 587, 500);
//  delay(500);.
//
//  // Calls the switch_led() function to toggle which led is on.
//  switch_led();
//  
//  // Makes the speaker sound for half a second at a frequency of 659hz
//  // Delay for half a second to make sure that the speaker sounds for a 
//  // second before the next tone.
//  tone(speaker, 659, 500); 
//  delay(500);

// To uncomment this higlight it all and use ctrl + /
//void bjornen_sover() { // This is deprecated
//  //Plays bjornen sover melody on a speaker. And turns two leds on and off. 
//  
//  // Calls the switch_led() function
//  switch_led();
//
//  // Same thing again.
//  tone(speaker, 659, 500); 
//  delay(500);
//
//  // Calls the switch_led() function to toggle which led is on.
//  switch_led();
//
//  // Makes the speaker sound for half a second at a frequency of 587hz
//  // Delay for 2 seconds to make it so that the speaker sounds for a second and 
//  // there is a seconds silence before the program loops and the next melody plays again.
//  tone(speaker, 587, 1000); 
//  delay(2000);
//}
///////////////////////////////////////////////////////////////////////////////////////////
void little_star(){
  
}


void setup() {
 // Sets the speaker and led pins to output as those are the anodes that they will be connected to.
  pinMode(speaker, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(blue, OUTPUT);
}


void loop(){
  bjornen_sover();
}


