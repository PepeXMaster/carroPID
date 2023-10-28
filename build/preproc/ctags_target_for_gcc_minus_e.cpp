# 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
byte b = 260;
void setup() {
   Serial.begin(9600);
   Serial.println(b); // imprime en decimal por defecto
   Serial.println(b, 10); // imprime en decimal, igual que arriba
   Serial.println(b, 2); // imprime en binario
   Serial.println(b, 16); // imprimir en hexadecimal
}
   void loop() {
}
