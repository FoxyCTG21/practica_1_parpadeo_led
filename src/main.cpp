#include <Arduino.h>
int tiempo = 500;

void setup() {
	pinMode(2, OUTPUT);
}

void loop() {
	digitalWrite(2, HIGH);
	delay(tiempo);
	digitalWrite(2, LOW);
	delay(tiempo);
}