#include <stdio.h>
#include MAXLINE 5

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	char line[MAXLINE];
	char longest[MAXLINE];

	int length = 0, maxlength = 0;

	printf("Enter Text (Ctrl + D to end)");

	while (len = getline(line, MAXLINE) > 0) {

	}
}

int getline (char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar())!=EOF && c!='\n'; ++i)
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

	while ((to[i] = from[i] != '\0')
			++i;
}

