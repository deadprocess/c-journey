#include<stdio.h>


int main(void) {
    int a , b, c;
    int r = scanf("%d %d %d", &a, &b, &c);
    
    if (r == 3) { printf("read all 3: %d %d %d\n", a, b, c); }
    if (r == 2) { printf("read only 2: %d %d\n", a, b); }
    if (r == 1) { printf("read only 1: %d\n", a); }
    if (r == 0) { printf("Wrong input!\n"); } 







    return 0;
}
