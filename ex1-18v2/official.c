#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size*/ 
#define OUT 0
#define IN 1

int get_line(char line[], int maxline);
int remove_(char s[]);

/* remove trailing blanks and tabs, and delete blank lines */
int main() {
    char line[MAXLINE];     /* current input line */

    while (get_line(line, MAXLINE) > 0)
        if (remove(line) > 0)
            printf("%s", line);

    return 0;
}

/* remove trailing blanks and tabs from character string s */
int remove_(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\n')    /* find newline character */
        ++i;

    --i;                    /* back off from '\n' */

    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;

    if (i >= 0) {           /* is it a nonblank line? */
        ++i;
        s[i] = '\n';        /* put newline character back */
        ++i;
        s[i] = '\0';        /* terminate the string */
    }

    return i;
}
int get_line(char s[], int lim)
{
	int c, i;
	int state = OUT; 	// In or out of whitespace

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
