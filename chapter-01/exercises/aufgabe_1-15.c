#include<stdio.h>
/* Umwandlung von Fahrenheit in Celsius */
float fahrenheit_to_celsius(float fah) {

	float celsius;

	celsius = (5.0/9.0) * (fah-32.0);
	return celsius;
}

int main(){

	float fahr, celsius;

	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper){
	
		celsius = fahrenheit_to_celsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
