#include <Arduino.h>
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
int ENA = 11;
int INA = 12;
int INB = 13;
int velocidad = 255; // Velocidad del motor que va de 0 a 255

//Función para ir hacia adelante
#line 7 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void adelante();
#line 14 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void atras();
#line 21 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void detener();
#line 27 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void derecha();
#line 30 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void setup();
#line 37 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void loop();
#line 7 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Funciones\\control_motor\\control_motor.ino"
void adelante(){
   analogWrite(ENA,velocidad);
   digitalWrite(INA,HIGH);
   digitalWrite(INB,LOW); 
}

//Función para ir hacia atrás 
void atras(){
    analogWrite(ENA,velocidad);
    digitalWrite(INA,LOW);
    digitalWrite(INB,HIGH);
}

//Función para detener el carro totalmente
void detener(){
    analogWrite(ENA,0);
    digitalWrite(INA,LOW);
    digitalWrite(INB,LOW);
}

void derecha(){
}

void setup() {
    pinMode(velocidad, OUTPUT);
    pinMode(INA, OUTPUT);
    pinMode(INB, OUTPUT);
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

