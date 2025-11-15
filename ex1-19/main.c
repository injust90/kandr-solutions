#include <stdio.h>

int getline1(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int length);

#define MAXLINE 1000
int main() {
	int len;
	int max;
	char line[MAXLINE];
	char reversedLine[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = getline1(line, MAXLINE)) > 0) {
		reverse(reversedLine, line, len);
		printf("%s\n", reversedLine);
	}


	return 0;
}

int getline1(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
			++i;
}

void reverse(char to[], char from[], int len)
{
	int j = 0;
	for (int i = len - 1; i > 0; --i) {
		to[i] = from[j];
		// printf("to: %c", to[i]);
		// printf("from: %c", from[i]);
		++j;
	}
}
