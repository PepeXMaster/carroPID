# 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\Led_Builtin.ino"
void setup()
{
 pinMode(13, 0x1);
}

void loop()
{
 digitalWrite(13,0x1);
    delay(5000);
    digitalWrite(13,0x0);
    delay(5000);
}
