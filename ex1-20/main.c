// Ex 1-20 Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n
// columns. Should n be a variable or a symbolic parameter?
#include <stdio.h>

#define MAXLINE 1000 // Maximum input line size

int max; // Mximum length seen so far
char line[MAXLINE]; // Current input line
char longest [MAXLINE]; // Longest line saved here

int getline1(void);
void copy(void);

// print longest input line; specialized version
int main()
{
	int len;
	extern int max;
	extern char longest[];
	
	max = 0;
	while ((len = getline1()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0) // there was a line
		printf("%s", longest);
	return 0;
}

// getline: specialized version
int getline1(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 
		&& (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

// copy: specialized version
void copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i], line[i]) != '\0')
		++i;
}

