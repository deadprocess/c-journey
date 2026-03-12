#include<stdio.h>

#define LOWER 0 /* untere Grenze der Temperaturtabelle */
#define UPPER 300 /* obere Grenze */
#define STEP 20 /* Schrittbreite */

/* Umwandlung von Fahrenheit in Celsius */

int main(){

	int fahr;
	
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));



}

