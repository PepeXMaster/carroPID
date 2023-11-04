# 1 "C:\\Users\\salve\\Documents\\GitHub\\carroPID\\Led_Builtin\\master\\master.ino"
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
    if(distancia <=20 && distancia >=0){
        detener();
        else
        delay(2000);
        angulogiro(27);
        adelante();




    //Detenerse por 1 segundo
    //detener();
    //delay(1000);

    //Retroceder por 3 segundos
    //atras();
    //delay(3000);

    //Detenerse por 1 segundo
    //detener();
    //delay(1000);
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
# 1 "C:\\Users\\salve\\Documents\\GitHub\\carroPID\\Led_Builtin\\master\\control_motor.ino"
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
# 1 "C:\\Users\\salve\\Documents\\GitHub\\carroPID\\Led_Builtin\\master\\servo.ino"
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
# 1 "C:\\Users\\salve\\Documents\\GitHub\\carroPID\\Led_Builtin\\master\\ultrasonico.ino"
int trig =2;
int eco=3;
int duracion;
int distancia;

void setup() {
  pinMode(trig, 0x1);
  pinMode(eco, 0x0);
  Serial.begin(9600);
}

void loop() {
digitalWrite(trig,0x1);
delay(1);
digitalWrite(trig,0x0);
duracion=pulseIn(eco,0x1);
distancia=duracion/58.2;
Serial.println(distancia );
delay(500);
    }
}
