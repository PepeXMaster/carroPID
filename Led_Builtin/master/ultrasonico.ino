int trig =2;
int eco=3;
int duracion;
int distancia;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  Serial.begin(9600);
}

void loop() {
digitalWrite(trig,HIGH);
delay(1);
digitalWrite(trig,LOW);
duracion=pulseIn(eco,HIGH);
distancia=duracion/58.2;
Serial.println(distancia );
delay(500);
    }
}    
