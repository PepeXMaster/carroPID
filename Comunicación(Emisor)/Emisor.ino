//Codigo tentativo Pixy2
#include <Arduino.h>
#include <Wire.h>
#include <Pixy2.h>
#include <Servo.h>

Pixy2 pixy;
Servo direccion;

int signature = 0;
int x = 0;
unsigned int width = 0;
unsigned int height = 0;
unsigned int area = 0;
unsigned int newarea = 0;
int Xmin = 70;
int Xmax = 200;
int maxArea = 0;
int minArea = 0;
static int i = 0;

void setup() {
  direccion.attach(3);
  pinMode(11, OUTPUT);
  pixy.init();
  Serial.begin(115200);
  //analogWrite(11, 255);
}

void loop() {
  while (millis() < 5000) {
    scan();
    area = width * height;
    maxArea = area + 1000;
    minArea = area - 1000;
    izquierda();
    
  }

  scan();

  if (signature == 1) {
    newarea = width * height;

    if (x < Xmin) {
      Serial.println("1");
      //direccion.write(85);
      izquierda();
    } else if (x > Xmax) {
      Serial.println("2");
      //direccion.write(60);
      derecha();
    } else {
      Serial.println("3");
      //direccion.write(75);
    }
  } else {
    //Serial.println("recto");
    //direccion.write(75);
  }

  //Serial.print("Altura: ");
  //Serial.print(height);
  //Serial.print(" Ancho: ");
  //Serial.println(width);
}

void scan() {
  uint16_t blocks;
  blocks = pixy.ccc.getBlocks();
  signature = pixy.ccc.blocks[i].m_signature;
  x = pixy.ccc.blocks[i].m_x;
  width = pixy.ccc.blocks[i].m_width;
  height = pixy.ccc.blocks[i].m_height;
}

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