<<<<<<< HEAD
<<<<<<< HEAD
# 1 "C:\\Users\\salve\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
/*

  Blink



  Turns an LED on for one second, then off for one second, repeatedly.



  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO

  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to

  the correct LED pin independent of which board is used.

  If you want to know what pin the on-board LED is connected to on your Arduino

  model, check the Technical Specs of your board at:

  https://www.arduino.cc/en/Main/Products



  modified 8 May 2014

  by Scott Fitzgerald

  modified 2 Sep 2016

  by Arturo Guadalupi

  modified 8 Sep 2016

  by Colby Newman



  This example code is in the public domain.



  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

*/
# 25 "C:\\Users\\salve\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
// the setup function runs once when you press reset or power the board
=======
# 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\GitHub\\carroPID\\masterCode\\masterCode.ino"
>>>>>>> c483c0ea4668267729cbc27744582672385f0e9f
=======
# 1 "C:\\Users\\pepe3\\OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey\\Documents\\carroPID\\Led_Builtin\\master\\master.ino"
int ENA = 11;
int INA = 12;
int INB = 13;
int velocidad = 100; // Velocidad del motor que va de 0 a 255

>>>>>>> d3b61860dd382452dbfbec7dcff7fce13644fa59
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
