const int LedPin = 0;  // defining LedPin to pin 0
const int Button = 2 ; // defining button to pin 2

void setup() {
  // put your setup code here, to run once
  pinMode(LedPin, OUTPUT);       // set LedPin as output
  pinMode(Button, INPUT_PULLUP); // set Button as input (input_pullup makes it high at idle)
}

void loop() {
  // put your main code here, to run repeatedly
  if (digitalRead(Button) == 0) { // check button pin state -- if low executes the below line
    digitalWrite(LedPin, LOW);    // set LedPin to high (1)
  } else {                        // execute this section when button pin is not low
    digitalWrite(LedPin, HIGH);   // set LedPin to low (0)
  }
}
