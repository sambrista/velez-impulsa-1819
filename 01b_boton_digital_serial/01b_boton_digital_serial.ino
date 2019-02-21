/*
  01 Botón digital B

  Ejemplo de funcionamiento de un botón con Serial.

  Ponencia "Evolución de los mandos de videojuegos y Arduino"

  Creado el 18 Feb 2019
  por Alfonso Jiménez Vílchez

  GNU GPL 3.0
  https://github.com/sambrista/velez-impulsa-1819/
*/

  Ponencia "Evolución de los mandos de videojuegos y Arduino"

  Creado el 18 Feb 2019
  por Alfonso Jiménez Vílchez

  GNU GPL 3.0
  https://github.com/sambrista/velez-impulsa-1819/
*/

int boton; // Variable donde almacenamos el valor del botón
int pinBoton = 2; // Pin donde leemos el botón
int pinLed = 13; // Pin donde enchufamos el LED

void setup() {
  // Inicia las entradas y salidas digitales.
  pinMode(pinLed, OUTPUT);
  pinMode(pinBoton,INPUT);
  Serial.begin(9600); //Inicia la conexión en serie
}

// Leemos digitalmente el pin del botón y escribimos su valor en el LED.
void loop() {
  boton = digitalRead(pinBoton);
  digitalWrite(pinLed, boton);
  Serial.print("Boton: "); // Imprime el texto.
  Serial.println(boton); // Imprime la variable y un salto de línea.
  delay(100);
}
