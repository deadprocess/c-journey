#include <stdio.h>


int main() {

    int c, lc;
    lc = 0;

    while((c = getchar()) != EOF){
        if (c == '\n' || c == '\t' || c == ' ')
            ++lc;
    }
    printf("%d\n", lc);
    
    

}
