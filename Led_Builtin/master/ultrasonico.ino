
void ultrasonico() {
  digitalWrite(trig,HIGH);
  delay(1);
   digitalWrite(trig,LOW);
  duracion=pulseIn(eco,HIGH);
  distancia=duracion/58.2;
  Serial.println(distancia );
  delay(500);
}    
