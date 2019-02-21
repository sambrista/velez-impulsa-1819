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

  http://www.arduino.cc/en/Tutorial/Blink
*/

int x,y, boton; // Variable donde almacenamos el valor del botón
int pinBoton = 2; // Pin donde leemos el botón
int pinLed = 13; // Pin donde enchufamos el LED

void setup() {
  // Inicia las entradas y salidas digitales.
  pinMode(pinLed, OUTPUT);
  pinMode(pinBoton,INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
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
  delay(100);        // delay in between reads for stability
}
