void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
	digitalWrite(LED_BUILTIN,LOW);
    delay(5000);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(500);
    Serial.println("Alan me la pela"); //Probando el Serial Monitor
}
