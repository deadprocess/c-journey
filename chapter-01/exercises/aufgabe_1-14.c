#include<stdio.h>
int main(){

	int c = 0;
	int frequency[256] = {0};

	while((c = getchar()) != EOF){
		++frequency[c];
		
	
	}
	for (int i = 0; i < 256; ++i){
		
		if(frequency[i] > 0){
			printf("Zeichen %c: ", i);
			for (int j = 0; j < frequency[i]; j++){
				printf("*");}
		printf("\n");}
			
		
	}
	

}
