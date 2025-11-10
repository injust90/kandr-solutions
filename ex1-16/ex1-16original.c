#include <stdio.h>
// #define MAXLINE 1000 // maximum input line size
#define MAXLINE 1000 

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
	int len;	// current line length
	int max;	// maximum length seen so far
	char line[MAXLINE];	// current input line
	char longest[MAXLINE]; 	// longest line saved here
	
	max = 0;

	// while length from getline is greater than 0
	while ((len = getline1(line, MAXLINE)) > 0)
	{
		// if length is greater than max length seen so far
		// set max = length and copy current input line to longest line saved
		if (len > max) {
		max = len;
		copy (longest, line);
		}
	}
	if (max > 0)	// if there was a line, print it 
		printf("%s", longest);
	return 0;
}

// read a line into s, return length
int getline1(char s[], int lim)
{
	int c, i;

	// for the length of the limiter, while c being assigned is not  EOF and not newline
	// assign line to character input
	for (i = 0; i < lim - 1 && (c = getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
