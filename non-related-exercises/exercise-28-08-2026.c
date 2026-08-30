#include<stdio.h>

int main (void) {

    int gesamt;

    printf("Gesamtzahl Tickets: ");
    if (scanf("%d", &gesamt) != 1) {
        printf("Falsches Eingabeformat!\n");
        return 1;

    }
	return 0;





}
