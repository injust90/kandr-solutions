#include <stdio.h>
#define LINELIMITER // Limits the size of the line input

int readline(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
	int currentLength;	// current line length
	int max;		// maximum length seen so far
	
