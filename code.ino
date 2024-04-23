// Define the pins for first set of components
const int motionSensorPin1 = 2;  // First motion sensor pin
const int redLEDPin1 = 9;        // First red LED pin
const int greenLEDPin1 = 10;     // First green LED pin

// Define the pins for second set of components
const int motionSensorPin2 = 3;  // Second motion sensor pin
const int redLEDPin2 = 7;        // Second red LED pin
const int greenLEDPin2 = 8;     // Second green LED pin

void setup() {
  // Set the first motion sensor as input
  pinMode(motionSensorPin1, INPUT);
  
  // Set the first LEDs as outputs
  pinMode(redLEDPin1, OUTPUT);
  pinMode(greenLEDPin1, OUTPUT);
  
  // Set the second motion sensor as input
  pinMode(motionSensorPin2, INPUT);
  
  // Set the second LEDs as outputs
  pinMode(redLEDPin2, OUTPUT);
  pinMode(greenLEDPin2, OUTPUT);
  
  // Start with the first set of LEDs
  digitalWrite(redLEDPin1, HIGH);
  digitalWrite(greenLEDPin1, LOW);
  
  // Start with the second set of LEDs
  digitalWrite(redLEDPin2, HIGH);
  digitalWrite(greenLEDPin2, LOW);
}

void loop() {
  // Read the first sensor value
  int sensorValue1 = digitalRead(motionSensorPin1);
  
  // If motion is detected by first sensor, turn the first green LED on and first red off
  if (sensorValue1 == HIGH) {
    digitalWrite(greenLEDPin1, HIGH);
    digitalWrite(redLEDPin1, LOW);
  } else {
    // If no motion is detected by first sensor, turn the first red LED on and first green off
    digitalWrite(redLEDPin1, HIGH);
    digitalWrite(greenLEDPin1, LOW);
  }
  
  // Read the second sensor value
  int sensorValue2 = digitalRead(motionSensorPin2);
  
  // If motion is detected by second sensor, turn the second green LED on and second red off
  if (sensorValue2 == HIGH) {
    digitalWrite(greenLEDPin2, HIGH);
    digitalWrite(redLEDPin2, LOW);
  } else {
    // If no motion is detected by second sensor, turn the second red LED on and second green off
    digitalWrite(redLEDPin2, HIGH);
    digitalWrite(greenLEDPin2, LOW);
  }
}