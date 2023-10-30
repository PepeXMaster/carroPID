# 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\master.ino"
int ENA = 11;
int INA = 12;
int INB = 13;
int velocidad = 100; // Velocidad del motor que va de 0 a 255

void setup() {
    pinMode(velocidad, 0x1);
    pinMode(INA, 0x1);
    pinMode(INB, 0x1);
    delay(2000); // Que tarde 2 segundos en empezar el programa
}

   void loop() {
    //Avanzar por 3 segundos
    adelante();
    delay(3000);

    //Detenerse por 1 segundo
    detener();
    delay(1000);

    //Retroceder por 3 segundos
    atras();
    delay(3000);

    //Detenerse por 1 segundo
    detener();
    delay(1000);
}

/*

A este código le hace falta confirmar que los pines INA e INB estén bien asignados, de lo contrario

las funciones adelante y atrás estarán invertidas; para resolver esto solo inviertan los pines

de INA e INB que se encuentra hasta arriba del código. 



Este código también es para probar la mecánica, en teoría el carro debería terminar justo donde comenzó;

en caso de que no entonces es porque la dirección no está totalmente derecha, o los engranajes se están 

barriendo (se cree que cuando el encoder se incluya al programa, no importará si los engranes se barren,

favor de confirmar este dato).

*/
# 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\control_motor.ino"
//Función para ir hacia adelante
void adelante(){
   analogWrite(ENA,velocidad);
   digitalWrite(INA,0x1);
   digitalWrite(INB,0x0);
}

//Función para ir hacia atrás 
void atras(){
    analogWrite(ENA,velocidad);
    digitalWrite(INA,0x0);
    digitalWrite(INB,0x1);
}

//Función para detener el carro totalmente
void detener(){
    analogWrite(ENA,0);
    digitalWrite(INA,0x0);
    digitalWrite(INB,0x0);
}
