#include <Servo.h>;
void derecha(){
  angulogiro(42);
}

void izquierda(){
  angulogiro(5);
}

void recto(){
  angulogiro(27);
}

//Funcion servo
void angulogiro(int angulo) {
  if (angulo >= 0 && angulo <= 180) {
    servodireccion.write(angulo);
    delay(1000);
  }
