#include <Arduino.h>
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
byte b = 260;
#line 2 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void setup();
#line 9 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void loop();
#line 2 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void setup() {
   Serial.begin(9600);
   Serial.println(b); // imprime en decimal por defecto
   Serial.println(b, DEC); // imprime en decimal, igual que arriba
   Serial.println(b, BIN); // imprime en binario
   Serial.println(b, HEX); // imprimir en hexadecimal
}
   void loop() {
}
