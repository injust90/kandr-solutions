#include <stdio.h>
#define MAXLINE 5 // maximum input line size

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
	int currentLength;	// current line length
	int max;	// maximum length seen so far
	char line [MAXLINE]; 	// curent input line
	char longest[MAXLINE]; 	// longest line saved here

	max = 0;
	// while there's another line, if (it's longer than the previous longest) save it
	// save its length
	// print longest line
	while ((currentLength = getline1(line, MAXLINE)) > 0)
		if (currentLength > max) {
			max = currentLength;
			copy(longest, line);
		}
	if (max > 0)	// there was a line
		printf("%s", longest);
	return 0;
}

// getline: read a line int s, return length
int getline1(char s[], int limit)
{
	int c, length;

	for (length = 0; length < limit - 1 && (c = getchar())!=EOF && c!='\n'; ++length)
		s[length] = c;
	if (c == '\n') {
		s[length] = c;
		++length;
	}
	s[length] = '\0';
	printf("Length: %d\n", length);
	return length;
}

// copy copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
			++i;
}
