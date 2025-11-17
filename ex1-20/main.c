// Ex 1-20 Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n
// columns. Should n be a variable or a symbolic parameter?
#include <stdio.h>

#define MAXLINE 1000 // Maximum input line size

int max; // Mximum length seen so far
char line[MAXLINE]; // Current input line
char longest [MAXLINE]; // Longest line saved here

int my_getline(char s[], int lim);
void copy(char to[], char from[]);

// print longest input line; specialized version
int main()
{
	int len;
	
	while ((len = my_getline(line, MAXLINE)) > 0)
		printf("%s", line);
	return 0;
}

int my_getline(char s[], int lim)
{
	int c, i, k;
	k = 0;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == '\t') {
			for (int j = 0;j < 4 - k; ++j)
			{
				s[i] = '*';
				// Write 4 characters but we don't want to advance past it.
				if (j < 3 - k)
				{
					++i;
				}
			}
		}
		else if (c != '\n') {
			s[i] = c;
			++k;
		}
	}

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

