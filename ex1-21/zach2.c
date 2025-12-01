#include <stdio.h>

#define MAXLINE 1000
#define TABSTOP 8

int get_line(char line[], int maxline);
void entab(char to[], char from[]);

int main() {
    int len;
    char line[MAXLINE];
    char entabbed_line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        entab(entabbed_line, line);
        printf("%s", entabbed_line);
    }
    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
        s[i++] = c;

    return i;
}

void entab(char to[], char from[]) {
    int c, i, j, tabs, spaces, pos;

    spaces = tabs = 0;
    i = j = pos = 0;

    // this line assigns c from[i] and checks if it is NOT EOF and NOT newline
    while ((c = from[i]) != EOF && c != '\n') {
	if (c != '\t')
		pos++;

        if (c == ' ') {
            if ((pos % TABSTOP) == 0) {
                tabs++;
                spaces = 0;
            } else {
                spaces++;
            }
        }

        if (c != ' ') {
            while (tabs-- > 0)
                to[j++] = '\t';

            if (c == '\t')
                pos += TABSTOP;

            while (spaces-- > 0)
                to[j++] = ' ';

            to[j++] = c;
        }

        i++;
    }

    if (c == '\n')
        to[j++] = c;

    to[j] = '\0';
}
