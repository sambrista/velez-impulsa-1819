/*
  01 Botón digital

  Charla sobre Arduino y la evolución de los 

  Creado el 18 Feb 2019
  por Alfonso Jiménez Vílchez

  This example code is in the public domain.
*/

int boton; // Variable donde almacenamos el valor del botón
int pinBoton = 2; // Pin donde leemos el botón
int pinLed = 13; // Pin donde enchufamos el LED

void setup() {
  // Inicia las entradas y salidas digitales.
  pinMode(pinLed, OUTPUT);
  pinMode(pinBoton,INPUT);
  Serial.begin(9600);
}

// Leemos digitalmente el pin del botón y escribimos su valor en el LED.
void loop() {
  boton = digitalRead(pinBoton);
  digitalWrite(pinLed, boton);
  Serial.print("Boton: ");
  Serial.println(boton);
  delay(100);
}
