/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
*/

// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i = 1; i < 200; i  += 10) {
    blink(i);
    delay(i);
    blink(i);
    delay(i);
  }

  blink(100);
  delay(100);
  blink(100);
  delay(1500);

  for (int i = 200; i > 0; i  -= 10) {
    blink(i);
    delay(i);
    blink(i);
    delay(i);
  }
}

void blink(int ms) {
  on();
  delay(ms);
  off();
}
void on() {
  digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
}

void off() {
  digitalWrite(led, LOW); // turn the LED off by making the voltage LOW
}

