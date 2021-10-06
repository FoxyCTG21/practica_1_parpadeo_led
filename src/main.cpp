#include <Arduino.h>

int tiempo = 500;

void setup() {
	pinMode(2, OUTPUT);
}

void loop() {
	digitalWrite(2, HIGH); //Encendido del LED 2
	delay(tiempo);
	digitalWrite(2, LOW); //Apagado del LED 2
	delay(tiempo);
}