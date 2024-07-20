const int potPin = 34;
const int LedPin = 16;
//variable for storing the potentiometer value
int Brightness = 0;

void setup() {
  pinMode (LedPin, OUTPUT);
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  Brightness = analogRead(potPin);
  analogWrite(LedPin, Brightness);
  Serial.print("Brightness: ");
  Serial.println(map(Brightness, 0, 4095, 0, 100));
  delay(500);
}