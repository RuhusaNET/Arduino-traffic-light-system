
// Traffic Light Control Program
// Author: Ruhusa (Arduino Beginner Project

// Define LED pins (constants)
const int redLED = 8;       // Red LED connected to digital pin 8
const int yellowLED = 9;    // Yellow LED connected to digital pin 9
const int greenLED = 10;    // Green LED connected to digital pin 10

void setup() {
  // Set the LED pins as OUTPUT
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // RED LIGHT ON
  digitalWrite(redLED, HIGH);     // Turn ON red LED
  digitalWrite(yellowLED, LOW);   // Turn OFF yellow LED
  digitalWrite(greenLED, LOW);    // Turn OFF green LED
  delay(5000);                    // Wait for 5 seconds
  // YELLOW LIGHT ON
  digitalWrite(redLED, LOW);      // Turn OFF red LED
  digitalWrite(yellowLED, HIGH);  // Turn ON yellow LED
  digitalWrite(greenLED, LOW);    // Turn OFF green LED
  delay(2000);                    // Wait for 2 seconds

  // GREEN LIGHT ON
  digitalWrite(redLED, LOW);      // Turn OFF red LED
  digitalWrite(yellowLED, LOW);   // Turn OFF yellow LED
  digitalWrite(greenLED, HIGH);   // Turn ON green LED
  delay(5000);                    // Wait for 5 seconds

  // YELLOW BEFORE RED
  digitalWrite(redLED, LOW);      
  digitalWrite(yellowLED, HIGH);  // Yellow ON again before red
  digitalWrite(greenLED, LOW);
  delay(2000);                    // Wait for 2 seconds
}
