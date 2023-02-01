//Adding variable names to pin numbers as to make the code easier to read.
const int red = 8;


void setup() {
//Letting the arduino know that pin red is going to be outputting stuff. So im putting it in output mode.
  pinMode(red, OUTPUT);
}

void RedBlinkSlow(){
  //A funktion to make the diode blink with a 1 second delay.
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
}
void RedBlinkFast(){
  //A funtion to make the diode blink with a 500ms delay.
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
}

void loop() {
  // runs the blink functions once each and then loops.
  RedBlinkFast();
  RedBlinkSlow();
}
