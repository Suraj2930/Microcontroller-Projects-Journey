const int LedG = 2; // Green LED connected to GPIO 2
const int LedB = 0; // Blue LED connected to GPIO 0
const int LedR = 4; // Red LED connected to GPIO 4
const int Sensor = 34; // Sensor connected to GPIO 34 (Analog ADC1_CH6)

int SensorVal = 0; // Variable for storing the sensor value
int Speed; // Variable for storing the mapped speed value

void setup() {
  pinMode(LedR, OUTPUT); // Set Red LED pin as output
  pinMode(LedG, OUTPUT); // Set Green LED pin as output
  pinMode(LedB, OUTPUT); // Set Blue LED pin as output
  Serial.begin(115200); // Initialize serial communication at 115200 baud rate
}

void loop() {
  SensorVal = analogRead(Sensor); // Read the sensor value
  Speed = map(SensorVal, 0, 4095, 0, 100); // Map the sensor value to a speed range of 0 to 100

  // Use if-else statements to control LEDs based on the speed value
  if (Speed > 0 && Speed <= 30) { 
    digitalWrite(LedG, HIGH); // Turn on Green LED
    digitalWrite(LedR, LOW); // Turn off Red LED
    digitalWrite(LedB, LOW); // Turn off Blue LED
  } else if (Speed > 30 && Speed <= 60) { 
    digitalWrite(LedB, HIGH); // Turn on Blue LED
    digitalWrite(LedG, LOW); // Turn off Green LED
    digitalWrite(LedR, LOW); // Turn off Red LED
  } else if (Speed > 60 && Speed <= 100) { 
    digitalWrite(LedR, HIGH); // Turn on Red LED
    digitalWrite(LedG, LOW); // Turn off Green LED
    digitalWrite(LedB, LOW); // Turn off Blue LED
  }

  Serial.printf("Speed %d\n", Speed); // Print the speed value to the Serial Monitor
}
