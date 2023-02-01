// Defines what pins belongs to what color diode, so I don't get a headache when I go back looking over the code trying to see what pin does what.
const int diode = 7;

void setup() {
// Letting the arduino know that pin diode is going to be outputting stuff. So im putting it in output mode.
  pinMode(diode, OUTPUT);
}

void DiodeBlinkSlow(){
  // A funktion to make the diode blink with a 1 second delay.
  digitalWrite(diode, HIGH); // Turns the diodes on
  delay(1000); // Waits a sec
  digitalWrite(diode, LOW); // Turns the diodes off
  delay(1000); // Waits a sec
}
void DiodeBlinkFast(){
  //A funtion to make the diode blink with a 500ms delay.
  digitalWrite(diode, HIGH);
  delay(500);
  digitalWrite(diode, LOW);
  delay(500);
}

void loop() {
  // runs the blink functions once each and then loops.
  DiodeBlinkFast();
  DiodeBlinkSlow();
}
