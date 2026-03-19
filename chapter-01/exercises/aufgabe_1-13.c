#include<stdio.h>
#define IN 1
#define OUT 0
#define MAXLEN 20
int main(){

	int c, nl, nw, nc, state;
	int word_per_len[MAXLEN] = {0};
	int len = 0;
	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF){
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t'){
		state = OUT;
		++word_per_len[len];
		len = 0;
		}

		else if (state == OUT){
			state = IN;
			++len;
			++nw;
		}else if (state == IN){
			++len;
			
		}
	
	}
	if (state == IN){
		++word_per_len[len];
	}
	printf("%d %d %d\n", nl, nw, nc);
	for (int i = 0; i <= MAXLEN; ++i){
		printf("Laenge %d: ", i);
		for (int j = 0; j < word_per_len[i]; j++){
			printf("*");
			
			}
		printf("\n");	
		
		}
	

}
