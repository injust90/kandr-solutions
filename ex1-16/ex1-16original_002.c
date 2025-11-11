#include <stdio.h>
// #define MAXLINE 1000 // maximum input line size
#define MAXLINE 1

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
	int maxSeen = 0;
	int c, i;
	i = 0;
	// counts the length and returns the line
	while ((len = getline(line, MAXLINE)) > 0)
	{

	}
	printf("maxSeen: %d\n", maxSeen); 
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
