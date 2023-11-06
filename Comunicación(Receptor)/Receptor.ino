#include <Servo.h>

Servo direccion;

int dato;

void derecha(){
  direccion.attach(3);
  direccion.write(60);
}

void izquierda(){
  direccion.attach(3);
  direccion.write(85);
}

void recto(){
  direccion.attach(3);
  direccion.write(75);
}

void setup(){
  Serial.begin(115200);
  pinMode(3,OUTPUT);
}

void loop(){
  if (Serial.available()>0){
    dato = Serial.read();
    if (dato == '1'){
      derecha();
    } if (dato == '2'){
      izquierda();
    } if (dato == '3'){
      recto();
    }
  }
}
