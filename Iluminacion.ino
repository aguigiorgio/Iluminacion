int pinLDR = 0;// Pin analogico de entrada para el LDR
int estado=0; // estado inicial del botón
int valorLDR = 1024;// Variable donde se almacena el valor del LDR  

void setup() {
 // Configuramos como salidas los pines donde se conectan los led
  pinMode(8,INPUT); // declaración del botón
  pinMode(2, OUTPUT); // declaración de pin 2 para salida del LED
  pinMode(3, OUTPUT);// declaración de pin 3 para salida del LED
  pinMode(4, OUTPUT);// declaración de pin 4 para salida del LED
  pinMode(5, OUTPUT);// declaración de pin 5 para salida del LED
  pinMode(6, OUTPUT);// declaración de pin 6 para salida del LED
  pinMode(7, OUTPUT);// declaración de pin 7 para salida del LED
  
  Serial.begin(9600); //  Configuracion del puerto serial
}

void loop() {
  digitalWrite(2, LOW);//Inicio del pin 2 apagado
  digitalWrite(3, LOW);//Inicio del pin 3 apagado
  digitalWrite(4, LOW);//Inicio del pin 4 apagado
  digitalWrite(5, LOW);//Inicio del pin 5 apagado
  digitalWrite(6, LOW);//Inicio del pin 6 apagado
  digitalWrite(7, LOW);//Inicio del pin 7 apagado
 
  valorLDR= analogRead(pinLDR); //Se le asignará el valor obtenido de l fotoresistencia
  Serial.println(valorLDR); // Devolver el valor leido a nuestro monitor serial en el IDE de Arduino
 
  //A continuación se aplicará el encendido de LED's mediante la configuración del LDR
  if(valorLDR >= 1024)//En caso de que el valor obtenido sea mayor o igual a 1024
  {
    estado=digitalRead(8);//se leerá el pin número 8
 
  if(estado==HIGH) { // Condicional en caso de que el botón esté presionado
  digitalWrite(2,HIGH); // Si es HIGH se encenderá el LED del pin 2
  digitalWrite(3,HIGH); // Si es HIGH se encenderá el LED del pin 3
  digitalWrite(4,HIGH); // Si es HIGH se encenderá el LED del pin 4
  digitalWrite(5,HIGH); // Si es HIGH se encenderá el LED del pin 5
  digitalWrite(6,HIGH); // Si es HIGH se encenderá el LED del pin 6
  digitalWrite(7,HIGH); // Si es HIGH se encenderá el LED del pin 7
  
  }
  else{ // En caso de que no se cumpla la condición
  digitalWrite(2,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(3,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(4,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(5,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(6,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(7,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  }
  }
  if(valorLDR >= 900 && valorLDR<=1024)// Si el valor de la fotoresistencia se encuentra entre este rango
  {
     estado=digitalRead(8);
  
  if(estado==HIGH) { // Condicional en caso de que el botón esté presionado
  digitalWrite(2,HIGH); // Si es HIGH se encenderá el LED del pin 2
  digitalWrite(3,HIGH); // Si es HIGH se encenderá el LED del pin 3
  digitalWrite(4,HIGH); // Si es HIGH se encenderá el LED del pin 4
  digitalWrite(5,HIGH); // Si es HIGH se encenderá el LED del pin 5
  digitalWrite(6,HIGH); // Si es HIGH se encenderá el LED del pin 6
  digitalWrite(7,HIGH); // Si es HIGH se encenderá el LED del pin 7
  
  }
  else{ // En caso de que no se cumpla la condición
  digitalWrite(2,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(3,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(4,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(5,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(6,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(7,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  }
  }
  if(valorLDR >=1000) // Si el valor de la fotoresistencia se encuentra entre este rango
  {
    estado=digitalRead(8); // Se leerá nuevamente el pin 8
  
  if(estado==HIGH) { // Condicional en caso de que el botón esté presionado
  digitalWrite(2,HIGH); // Si es HIGH se encenderá el LED del pin 2
  digitalWrite(3,HIGH); // Si es HIGH se encenderá el LED del pin 3
  digitalWrite(4,HIGH); // Si es HIGH se encenderá el LED del pin 4
  digitalWrite(5,HIGH); // Si es HIGH se encenderá el LED del pin 5
  digitalWrite(6,HIGH); // Si es HIGH se encenderá el LED del pin 6
  digitalWrite(7,HIGH); // Si es HIGH se encenderá el LED del pin 7
  
  }
  else{ // En caso de que no se cumpla la condición
  digitalWrite(2,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(3,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(4,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(5,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(6,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(7,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  }
  }
  if(valorLDR<=900)
  {
    estado=digitalRead(8);
  
  if(estado==HIGH) { // Condicional en caso de que el botón esté presionado
  digitalWrite(2,HIGH); // Si es HIGH se encenderá el LED del pin 2
  digitalWrite(3,HIGH); // Si es HIGH se encenderá el LED del pin 3
  digitalWrite(4,HIGH); // Si es HIGH se encenderá el LED del pin 4
  digitalWrite(5,HIGH); // Si es HIGH se encenderá el LED del pin 5
  digitalWrite(6,HIGH); // Si es HIGH se encenderá el LED del pin 6
  digitalWrite(7,HIGH); // Si es HIGH se encenderá el LED del pin 7
  
  }
  else{ // En caso de que no se cumpla la condición
  digitalWrite(2,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(3,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(4,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(5,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(6,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  digitalWrite(7,LOW); //Si no es HIGH permanecerá apagado el LED del pin 2
  }
  }
   if( valorLDR<=700)// Si el valor de la fotoresistencia se encuentra entre este rango
  {
    digitalWrite(2, HIGH);//Pin 2 prenderá
    digitalWrite(3, LOW);//Pin 3 permanecerá apagado
    digitalWrite(4, HIGH);//Pin 4 se prenderá
    digitalWrite(5, LOW);//Pin 5 permanecerá apagado
    digitalWrite(6, HIGH);//Pin 6 se prenderá
    digitalWrite(7, LOW);//Pin 7 permenecerá apagado
  }
   if(valorLDR<=600)// Si el valor de la fotoresistencia se encuentra entre este rango
  {
    digitalWrite(2, HIGH);//Pin 2 se prenderá
    digitalWrite(3, HIGH);//Pin 3 se prenderá
    digitalWrite(4, LOW);//Pin 4 permanecerá apagado
    digitalWrite(5, LOW);//Pin 5 permanecerá apagado
    digitalWrite(6, HIGH);//Pin 6 se prenderá
    digitalWrite(7, HIGH);//Pin 7 se prenderá
  }
   if(valorLDR<=400)// Si el valor de la fotoresistencia se encuentra entre este rango
  {
    digitalWrite(2, HIGH);//Pin 2 se prenderá
    digitalWrite(3, HIGH);//Pin 3 se prenderá
    digitalWrite(4, HIGH);//Pin 4 se prenderá
    digitalWrite(5, HIGH);//Pin 5 se prenderá
    digitalWrite(6, HIGH);//Pin 6 se prenderá
    digitalWrite(7, HIGH);//Pin 7 se prenderá
  } 
  delay(200);// Esperar unos milisegundos antes de actualizar
}
