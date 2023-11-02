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
