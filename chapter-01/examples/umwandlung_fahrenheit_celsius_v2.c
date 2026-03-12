#include<stdio.h>

/* Umwandlung von Fahrenheit in Celsius fÃr fahr = 0, 20, ..., 300; Version mit Gleitpunkt */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* untere Grenze der Temperaturtabelle */
	upper = 300; /* obere Grenze */
	step = 20; /* Schrittbreite */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
