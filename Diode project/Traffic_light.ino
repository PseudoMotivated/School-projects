// Defines what pins belongs to what color diode, so I don't get a headache when I go back looking over the code trying to see what pin does what.
const int red = 0;
const int yellow = 1;
const int green = 2;
const int button = 3;

// Sets a start-value for the button state. To avoid errors down the road.
int buttonState = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
// Every digital pin in the arduino has a resistor in it, the line below enables that resistor, getting rid of the need of a physical one.  
  digitalWrite(button, HIGH);
}

// Makes the red light blink
void redlight() {
    digitalWrite(red, HIGH);
    delay(300);
    digitalWrite(red, LOW);
    delay(300);
}
// Makes the yellow light blink
void yellowlight() {
    digitalWrite(yellow, HIGH);
    delay(300);
    digitalWrite(yellow, LOW);
    delay(300);
    
}
// Makes the green light blink
void greenlight() {
    digitalWrite(green, HIGH);
    delay(300);
    digitalWrite(green, LOW);
    delay(300);
}

// Equivalent to main
void loop(){
// Counts from 1 to 3, increments for every button press. Resets to 1 when it reaches 4. 
  int i = 0;
  buttonState == digitalRead(button);
  if (buttonState = LOW) {
//This works because the button is wired to ground, and the pin is writing/reading high. When the button is pushed, the pin reads LOW.
//This isn't frying the arduino because the internal pullup resistor is on due to line 16.
    i + 1;
// Resets the counter to 1 when it reaches 4. Going back to the red light.
    if (i >= 4) {
       i = 1;
    }
  }
// Loops the redlight function when the counter reaches 1. 
  while (i == 1) {
    redlight();
  }
// Loops the yellowlight function when the counter reaches 2. 
  while (i == 2) {
    yellowlight();
  }
// Loops the greenlight function when the counter reaches 3. 
  while (i == 3) {
    greenlight();
  }
}


