#include <stdio.h>

#define MAXLINE 1000
#define IN 1
#define OUT 0

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len; 		// Current line length
	int max; 		// maximum length seen so far
	char line[MAXLINE];	// Current input line
	char longest[MAXLINE];  // longest line saved here

	while ((len = get_line(line, MAXLINE)) > 0)
	{
		copy(longest, line);
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
		if (c == ' ' || c == '\t') {
			state = OUT;	// In the blank space, do not copy yet
			--i;
		}
		else {
			state = IN;
			s[i] = c;
		//	printf("s[%d]: %c\n", i, s[i]);
		}
	if (c == '\n') {
		s[i] = c;
		// printf("s[%d]: %c\n", i, s[i]);
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
