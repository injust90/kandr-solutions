// Ex 1-20 Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n
// columns. Should n be a variable or a symbolic parameter?
#include <stdio.h>

#define MAXLINE 1000 // Maximum input line size
#define IN 1
#define OUT 0

int max; // Mximum length seen so far
int state = OUT;
char line[MAXLINE]; // Current input line
char longest [MAXLINE]; // Longest line saved here

int entab(char s[], int lim);
void copy(char to[], char from[]);

// print longest input line; specialized version
int main()
{
	int len;
	

	// printf("        8spaces\n");
	// printf("       	7spaces1tab\n");
	// printf("    	4spaces1tab\n");
	while ((len = entab(line, MAXLINE)) > 0)
		printf("%s", line);
	return 0;
}

int entab(char s[], int lim)
{
	int c, i, k;
	k = 0;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == ' ') {
			state = IN;
				if (state == OUT)
					s[i] = '^';
		}
		else {
			s[i] = c;
			state = OUT;
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

