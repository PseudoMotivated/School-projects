//Defines what pins bwlong to what color diodes, so I dont get a headache when I go back looking over the code trying to see what pin does what.
const int red = 0;
const int yellow = 1;
const int green = 2;
const int button = 3;

//Sets a start-value for the button state. To avoid errors down the road.
int buttonState = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
//Every digital pin in the arduino has a resistor in it, the line below enables that resistor, getting rid of the need of a physical one.  
  digitalWrite(button, HIGH);
}
//Counts from 1 to 3, increments for every button press. Resets to 1 when it reaches 4. 

//Makes the red light blink
void redlight() {
    digitalWrite(0, HIGH);
    delay(300);
    digitalWrite(0, LOW);
    delay(300);
}
//Makes the yellow light blink
void yellowlight() {
    digitalWrite(1, HIGH);
    delay(300);
    digitalWrite(1, LOW);
    delay(300);
    
}
//Makes the green light blink
void greenlight() {
    digitalWrite(2, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    delay(300);
}

// Equivalent to main
void loop(){
//Counts from 1 to 3, increments for every button press. Resets to 1 when it reaches 4. 
  int i = 0;
  buttonState == digitalRead(button);
  if (buttonState = LOW) {
    i + 1;
    if (i >= 4) {
       i = 1;
    }
  }
  while (i == 1) {
    redlight();
  }
  while (i == 2) {
    yellowlight();
  }
  while (i == 3) {
    greenlight();
  }
}