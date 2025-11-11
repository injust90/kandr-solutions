#include <stdio.h>
#include <string.h>
#define MAXLINE 3

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main() {
    char line[MAXLINE];
    char longest[MAXLINE];
    int len = 0, max_len = 0;

    printf("Enter text (Ctrl+D to end):\n");

    while (fgets(line, sizeof(line), stdin)) {
        len = strlen(line);

        while (len > 0 && line[len - 1] != '\n' && !feof(stdin)) {
            char cont[MAXLINE];
            if (!fgets(cont, sizeof(cont), stdin)) break;
            len += strlen(cont);
        }

        if (len > max_len) {
            max_len = len;
            strcpy(longest, line);
        }
    }

    if (max_len > 0)
        printf("\nMax length: %d\nText: %s\n", max_len, longest);

    return 0;
}

// getline: read a line int s, return length
int getline1(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
			++i;
}
