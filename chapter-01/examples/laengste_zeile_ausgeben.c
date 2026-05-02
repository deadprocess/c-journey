#include <stdio.h>
#define MAXLINE 1000 /* maximale Laenge einer Eingabezeile */

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
    
    int c, i;
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i; 
    }
    s[i] = '\0';
    return i;
}


/* copy: 'from' nach 'to' kopieren; 'to' muss groß genung sein */
void copy(char to[], char from[]) {

    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
