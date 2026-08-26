#include<stdio.h>

int main(void) {

	int free =  12;
	int used = 37;

	printf("free: %d\n", free);
	printf("used: %d\n", used);

	if(used > free) {
		printf("There is more used space than free space.\n");
	}else { printf("There is more free space than used space.\n");  }

	return 0;




}
