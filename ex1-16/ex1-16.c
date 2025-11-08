#include <stdio.h>
#define MAXLINE 5 // maximum input line size

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
	int currentLength;	// current line length
	int maxlengthseen;	// maximum length seen so far
	char line [MAXLINE]; 	// curent input line
	char longest[MAXLINE]; 	// longest line saved here

	maxlengthseen = 0;
	// while there's another line, if (it's longer than the previous longest) save it
	// save its length
	// print longest line
	while ((currentLength = getline1(line, MAXLINE)) > 0)
		if (currentLength > maxlengthseen) {
			maxlengthseen = currentLength;
			copy(longest, line);
		}
	if (maxlengthseen > 0)	// there was a line
		printf("%s", longest);
	return 0;
}

// getline: read a line int s, return length
int getline1(char newLine[], int limit)
{
	int c, length;

	for (length = 0; length < limit - 1 && (c = getchar())!=EOF && c!='\n'; ++length)
		newLine[length] = c;
	if (c == '\n') {
		newLine[length] = c;
		++length;
	}
	newLine[length] = '\0';
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
