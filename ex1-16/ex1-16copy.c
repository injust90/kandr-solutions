#include <stdio.h>
#define MAXLINE 1000 

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
	int len;	// current line length
	int max;	// maximum length seen so far
	char line [MAXLINE]; 	// curent input line
	char longest[MAXLINE]; 	// longest line saved here

	max = 0;
	// while length is being set to getline, if length is greater than max, max is set to length, and we copy the longest to the line
	while ((len = getline1(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)	// there was a line
		printf("%s", longest);
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
