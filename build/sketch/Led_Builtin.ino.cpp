#include <Arduino.h>
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void setup();
#line 7 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void loop();
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
	digitalWrite(LED_BUILTIN,HIGH);
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    delay(500);
    Serial.println("Chava me la pela");
}

