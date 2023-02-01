//Adding variable names to pin numbers as to make the code easier to read.
const int red = 8;



void setup() {
//Letting the arduino know that pin red are going to be outputting stuff. So im putting them in output mode.
  pinMode(red, OUTPUT);
}


void RedBlink(){
  //turns the led on
  digitalWrite(red, HIGH);
  //keeps being lit for 11ms
  delay(11);
  //turns the led off
  digitalWrite(red, LOW);
  //keeps it off for 11ms before lighting it again. 
  delay(11);
}


void loop() {
 RedBlink();
}
