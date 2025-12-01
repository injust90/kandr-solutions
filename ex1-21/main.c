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

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
	    s[i] = c;
	    ++i;
    }

    return i;
}

void entab(char to[], char from[]) {
	int i, j, spaceCounter;
	i = j = spaceCounter = 0;

	while (from[i] != '\0') {
		to[j] = from[i];
		if (spaceCounter == 8) {
			++j;
			to[j] = '^';
			if (i % TABSTOP) {
				spaceCounter = 0;
			}
		}
		if (from[i] == ' ') {
			spaceCounter++;
		//	printf("spaceCounter: %d ", spaceCounter);
		}
		else {
			++j;
		}
		++i;
	}
}
