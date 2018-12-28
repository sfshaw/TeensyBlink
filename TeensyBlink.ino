// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
#define LED_PIN 13
#define DEALY 1000
#define MAX_DELAY 250
#define DELTA 5

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  blink_setup();
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i = 1; i < MAX_DELAY; i  += DELTA) {
    blink(i);
    delay(i);
    blink(i);
    delay(i);
  }
  for (int i = 1; i < MAX_DELAY; i  +=  (2 * DELTA)) {
    blink(i);
    delay(i);
  }

  blink(100);
  delay(100);
  blink(100);
  delay(MAX_DELAY * 10);

  for (int i = MAX_DELAY; i > 0; i  -= (2 * DELTA)) {
    blink(i);
    delay(i);
  }
  for (int i = MAX_DELAY; i > 0; i  -= DELTA) {
    blink(i);
    delay(i);
    blink(i);
    delay(i);
  }
}

void blink_setup(){
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void blink(int i) {
  on();
  delay(i);
  off();
  // please always turn off LED in each function use
}

void blink_delay(int ms){
  on();
  delay(ms);
  off();
}
void on() {
  digitalWrite(LED_PIN, HIGH); // turn the LED on (HIGH is the voltage level)
}

void off() {
  digitalWrite(LED_PIN, LOW); // turn the LED off by making the voltage LOW
}
