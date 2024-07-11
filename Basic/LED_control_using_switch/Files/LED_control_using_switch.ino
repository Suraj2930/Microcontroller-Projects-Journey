const int LedPin = 0;
const int Button = 2 ;

void setup() {
  // put your setup code here, to rumconce
  pinMode(LedPin, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly
  if (digitalRead(Button) == 0) {
    digitalWrite(LedPin, LOW);
  } else {
    digitalWrite(LedPin, HIGH);
  }
}