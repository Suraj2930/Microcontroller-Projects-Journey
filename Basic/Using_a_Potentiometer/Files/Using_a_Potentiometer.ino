const int potPin = 34; // Potentiometer is connected to GPIO 34 (Analog ADC1_CH6)
int potValue = 0; // Variable for storing the potentiometer value

void setup() {
  Serial.begin(115200); // Initialize serial communication at a baud rate of 115200
  delay(1000); // Small delay to stabilize the setup
}

void loop() {
  potValue = analogRead(potPin); // Reading potentiometer value
  Serial.print("Pot value "); // Print the text "Pot value " to the Serial Monitor
  Serial.println(potValue); // Print the potentiometer value to the Serial Monitor
  delay(500); // Wait for half a second before the next reading
}
