const int LedPin = 0; // defining LedPin to pin 0

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT); // setting pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LedPin, HIGH); // set pin state to high (1)
  delay(1000);                // wait for one second
  digitalWrite(LedPin, LOW);  // set pin state to low (0)
  delay(1000);                // wait for one second
}
