#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void copy(char to[], char from[]);
/* laengste Eingabezeile ausgeben */
int main() {
int len; /* Laenge der momentanen Eingabezeile */
char line[MAXLINE]; /* momentane Eingabezeile */
while ((len = get_line(line, MAXLINE)) > 0){
  if (len >= 81)
    printf("%s", line);  
}
return 0;
}
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
