byte b = 260;
void setup() {
   Serial.begin(9600);
   Serial.println(b); // imprime en decimal por defecto
   Serial.println(b, DEC); // imprime en decimal, igual que arriba
   Serial.println(b, BIN); // imprime en binario
   Serial.println(b, HEX); // imprimir en hexadecimal
}
   void loop() {
}