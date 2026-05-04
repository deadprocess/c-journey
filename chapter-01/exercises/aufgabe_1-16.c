#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* laengste Eingabezeile ausgeben */

int main() {

int len; /* Laenge der momentanen Eingabezeile */
int max; /* bisheriges Maximum */
char line[MAXLINE]; /* momentane Eingabezeile */
char longest[MAXLINE]; /* bisher laengste Zeile */

max = 0;
while ((len = get_line(line, MAXLINE)) > 0)
    if (len > max) {
        max = len;
        copy(longest, line);
    }
if (max > 0)
    printf("%s", longest);
return 0;
}

/* getline: zeile an s, Laenge als Resultat */
int get_line(char s[], int lim) {
    int c, i, len;
    i = 0;
    len = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        if (len < lim - 2)
            s[i++] = c;
        len++;
    }
    if (c == '\n')
	len++;
    if (i < lim - 1)
        s[i++] = '\n';
    s[i] = '\0';
    return len;



}


/* copy: 'from' nach 'to' kopieren; 'to' muss groß genung sein */
void copy(char to[], char from[]) {

int i;
i = 0;
while ((to[i] = from[i]) != '\0')
    i++;
}
