// This program just makes a simple speaker sound at a frequency, in this case 440 hz. 
void setup() {
 // Sets the pin 12 to output as that the anode that the speaker will be connected to.
  pinMode(12, OUTPUT);
  
}

void loop() {
  // Makes the speaker sound for a second at a frequency of 440hz on pin 12.
  tone(12, 440, 500);
 // Delay for half a second more than the speakers sounding time to make sure that the speaker sounds for half a second
 // And then there will be half a seconds silence before the program loops and the speaker sounds again. 
  delay(1000);
}
