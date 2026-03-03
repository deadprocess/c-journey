#include <stdio.h>


int main(){

int character;
int prev;

    while((character = getchar()) != EOF){
         if (character == ' ' && prev == ' '){
         
            continue;
         }
         putchar(character);
         prev = c;
    }
    return 0;
}
