#include <Servo.h>

int ENA = 11;
int INA = 12;
int INB = 13;
int velocidad = 100; // Velocidad del motor que va de 0 a 255
int distancia;
int trig =2;
int eco=3;
int duracion;
int cont;
Servo direccion;


void setup() {
    pinMode(velocidad, OUTPUT);
    pinMode(INA, OUTPUT);
    pinMode(INB, OUTPUT);
    pinMode(trig, OUTPUT);
    pinMode(eco, INPUT);
    Serial.begin(9600);
    direccion.attach(3);
    delay(2000); // Que tarde 2 segundos en empezar el programa
}

   void loop() {
    //if(distancia <=20 && distancia >=0){
    //    detener();
    //    }
    //    else {
    //    delay(2000);
    //    angulogiro(27);
    //    adelante();
    //   }
    while(cont < 5){
      cont ++;
      adelante();
      delay(5000);
      derecha();
      delay(3000);
      recto();
    }
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
