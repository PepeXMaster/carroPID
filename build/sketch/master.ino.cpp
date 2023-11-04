#include <Arduino.h>
#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\master.ino"
#include <Servo.h>

int ENA = 11;
int INA = 13;
int INB = 12;
int velocidad = 255; // Velocidad del motor que va de 0 a 255
int distancia;
int trig =2;
int eco=3;
int duracion;
int cont;
int servo = 3;
Servo direccion;


void setup() {
    pinMode(velocidad, OUTPUT);
    pinMode(INA, OUTPUT);
    pinMode(INB, OUTPUT);
    pinMode(trig, OUTPUT);
    pinMode(eco, INPUT);
    //Serial.begin(9600);
    delay(2000); // Que tarde 2 segundos en empezar el programa
    recto();
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
    //delay(1000);
    while(cont < 4){
      cont ++;
      adelante();
      delay(5000);
      derecha();
      delay(5000);
      recto();
    }
    detener();
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

#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\control_motor.ino"
//Función para ir hacia adelante
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

#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\servo.ino"
void derecha(){
  direccion.attach(servo);
  direccion.write(60);
}

void izquierda(){
  direccion.attach(servo);
  direccion.write(85);
}

void recto(){
  direccion.attach(servo);
  direccion.write(75);
}

#line 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\ultrasonico.ino"

void ultrasonico() {
  digitalWrite(trig,HIGH);
  delay(1);
   digitalWrite(trig,LOW);
  duracion=pulseIn(eco,HIGH);
  distancia=duracion/58.2;
  Serial.println(distancia );
  delay(500);
}    

