/*
  02 Lectura de joystick analógico

  Ejemplo de funcionamiento de un joystick analógico.
  Ponencia "Evolución de los mandos de videojuegos y Arduino"

  Creado el 18 Feb 2019
  por Alfonso Jiménez Vílchez

  GNU GPL 3.0
  https://github.com/sambrista/velez-impulsa-1819/
*/

int x,y, boton; // Variable donde almacenamos la posición horizontal, vertical y el valor del botón
int pinBoton = 2; // Pin donde leemos el botón
int pinLed = 13; // Pin donde enchufamos el LED

void setup() {
  // Inicia las entradas y salidas digitales.
  pinMode(pinLed, OUTPUT);
  pinMode(pinBoton,INPUT);
  Serial.begin(9600);
}

void loop() {
  // Leemos analógicamente ambos ejes del joystick
  x = analogRead(A0);
  y = analogRead(A1);
  boton = digitalRead(pinBoton);
  digitalWrite(pinLed, boton);
  Serial.print("x:");
  Serial.print(x);
  Serial.print(" y:");
  Serial.print(y);
  Serial.print(" boton:");
  Serial.println(boton);
  delay(100);
}
