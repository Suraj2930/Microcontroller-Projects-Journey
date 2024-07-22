void setup() {
  // Initialize the setup code, this runs once
  for(int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT); // Set pins 2 to 8 as outputs
  }
}

void loop() {
  // Main code, this runs repeatedly
  for(int i = 2; i < 9; i++) {
    digitalWrite(i - 1, LOW); // Turn off the previous LED
    digitalWrite(i, HIGH); // Turn on the current LED
    delay(60); // Wait for 60 milliseconds
  }
  for(int i = 8; i >= 2; i--) {
    digitalWrite(i, HIGH); // Turn on the current LED
    digitalWrite(i + 1, LOW); // Turn off the next LED
    delay(60); // Wait for 60 milliseconds
  }
}