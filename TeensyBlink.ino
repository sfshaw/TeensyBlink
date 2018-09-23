// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
#define LED_PIN 13
#define DEALY 1000

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  blink_setup();
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

blink_setup(){
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void blink() {
  on();
  delay(DELAY);
  off();
}

void blink_delay(){
  on();
  delay(int ms);
  off();
}
void on() {
  digitalWrite(LED_PIN, HIGH); // turn the LED on (HIGH is the voltage level)
}

void off() {
  digitalWrite(LED_PIN, LOW); // turn the LED off by making the voltage LOW
}
