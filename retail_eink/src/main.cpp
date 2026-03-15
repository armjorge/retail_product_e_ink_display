
#include <Arduino.h>

void setup() {
  // 1. Tell the Nano that the LED pin is an OUTPUT (it sends electricity out)
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // 2. Turn the LED ON (HIGH voltage)
  digitalWrite(LED_BUILTIN, HIGH);
  
  // 3. Wait for 1 second (1000 milliseconds)
  delay(1000);
  
  // 4. Turn the LED OFF (LOW voltage)
  digitalWrite(LED_BUILTIN, LOW);
  
  // 5. Wait for 1 second
  delay(1000);
  
  // The loop then starts over from step 2!
}

