// LED Blink Project
// Verified working on Arduino UNO / Nano / Mega

// The onboard LED is usually connected to pin 13
const int ledPin = 13;  

void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on
  delay(1000);                  // Wait for 1 second
  digitalWrite(ledPin, LOW);    // Turn the LED off
  delay(1000);                  // Wait for 1 second
}
---

## 👩‍💻 Author
*Megha Dangi*  
Electronics Enthusiast | Arduino Learner | Circuit Designer  
🌐 [GitHub Profile](https://github.com/Megha-Dangi)
📅 November 2025
