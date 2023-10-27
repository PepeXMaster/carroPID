#include <Arduino.h>
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
void setup();
#line 7 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
void loop();
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
delay(1000)
  

