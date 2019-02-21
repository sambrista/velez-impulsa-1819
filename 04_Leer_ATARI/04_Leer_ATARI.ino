/*
  02 Lectura de mando ATARI

  Lee los valores de un mando ATARI de un sólo botón..
  Ponencia "Evolución de los mandos de videojuegos y Arduino"

  Creado el 18 Feb 2019
  por Alfonso Jiménez Vílchez

  GNU GPL 3.0
  https://github.com/sambrista/velez-impulsa-1819/
*/
int arriba, abajo, izquierda, derecha, boton; // Variable donde almacenamos el valor del botón
int pinBoton = 2; // Pin donde leemos el botón
int pinArriba = 5; // Pin donde leemos el botón
int pinAbajo = 3; // Pin donde leemos el botón
int pinIzquierda= 6; // Pin donde leemos el botón
int pinDerecha = 4; // Pin donde leemos el botón
int pinLed = 13; // Pin donde enchufamos el LED

void setup() {

  pinMode(pinLed, OUTPUT);
  pinMode(pinBoton,INPUT);
  pinMode(pinArriba,INPUT);
  pinMode(pinAbajo,INPUT);
  pinMode(pinIzquierda,INPUT);
  pinMode(pinDerecha,INPUT);
  
  Serial.begin(9600);
}

void loop() {
  izquierda = digitalRead(pinIzquierda);
  arriba = digitalRead(pinArriba);
  derecha = digitalRead(pinDerecha);
  abajo = digitalRead(pinAbajo);
  boton = digitalRead(pinBoton);
  digitalWrite(pinLed,boton);
  Serial.print(izquierda);
  Serial.print(arriba);
  Serial.print(derecha);
  Serial.print(abajo);
  Serial.println(boton);
  delay(100);        // delay in between reads for stability
}
