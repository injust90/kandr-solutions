#include <stdio.h>

#define MAXLINE 1000
#define IN 1
#define OUT 0

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void removeTrailing(char to[], char from[], int len);

int main()
{
	int len; 		// Current line length
	int max; 		// maximum length seen so far
	char line[MAXLINE];	// Current input line
	char longest[MAXLINE];  // longest line saved here

	while ((len = get_line(line, MAXLINE)) > 0)
	{
		copy(longest, line);
		removeTrailing(longest, line, len);
		printf("%s", longest);
	}

	return 0;
}

// getline: read a line into s, return length
int get_line(char s[], int lim)
{
	int c, i;
	int state = OUT; 	// In or out of whitespace

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'to': assume to is big enough
void copy(char to[], char from[])
{
	int i;
	i = 0;

	while ((to[i] = from[i]) != '\0') {
//		printf("to[%d]: %c\n", i, to[i]);
		++i;
	}
}

void removeTrailing(char to[], char from[], int len)
{
	int i;
	i = 0;
	int state = OUT;
	int stateCounter = 0;

	/*
	for (i = len - 1; i > 0; --i) {
		if (from[i] == ' ' || from[i] == '\t') {
			state = OUT;
			++stateCounter;
			++i;
		}
		else if (state == OUT && stateCounter == 1) {
			state = IN;
			to[i] = from[i];
		}
	}
	*/
	for (i = len - 1; i >= 0; --i) {
	//	printf("to[%d]: %c\n", i, to[i]);
		if (from[i] == ' ' || from[i] == '\t') {
			state = OUT;
			++stateCounter;
			--i;
		}
		else if (state == OUT && stateCounter == 1) {
			state = IN;
			to[i] = from[i];
		}
	}
}
