// Defines what pins belongs to what color diode, so I don't get a headache when I go back looking over the code trying to see what pin does what.
#define green 9
#define yellow 8
#define red 7 // all occurances of green, yellow and red will be replaced by 9, 8 or 7 at compilation. 


void setup() {
  pinMode(red, OUTPUT); // Puts the diodes pins in output mode, so that when we digitalWrite(pin, HIGH/LOW) the pin outputs electicity (or stops outputting electricity). 
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
// Equivalent to main
void loop(){
    digitalWrite(green, HIGH); // Green diode get turned on for 300ms 
    delay(300);
    digitalWrite(green, LOW); // Then it gets turned off and the yellow diode is turned on immediatly 
    digitalWrite(yellow, HIGH); // yellow diode get turned on for 300ms 
    delay(300);
    digitalWrite(yellow, LOW); // Then it gets turned off and the red diode is turned on immediatly 
    digitalWrite(red, HIGH);
    delay(300); // Red diode stays on for 300ms 
    digitalWrite(red, LOW); // Then it is turned off. The program loops, the programs begins again from the top of `void loop()`. ie `digitalWrite(green, HIGH);`. so the green diode gets turned on immediatly. 
}
  // u know what? screw dry programming, cant get bothered, this is just easier. Spaghetti code gets the job done well enough.   
