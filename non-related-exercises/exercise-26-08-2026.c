#include<stdio.h>

int main() {

	int free =  12;
	int used = 37;

	printf("free: %d\n", free);
	printf("used: %d\n", used);

	if(used > free) {
		printf("There is more used space than free space.");
	}else { printf("There is more free space than used space.");  }






}
