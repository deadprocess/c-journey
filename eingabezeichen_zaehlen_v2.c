#include <stdio.h>

/* Eingabezeichen zaehlen, Version 2 */

int main() {

    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);

}
