#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
	int len; // current line length
	int max; /* maximum length seen so far */
	char line [MAXLINE]; /*current input line*/
	char longest [MAXLINE]; /* longest line saved here */

	void removeTrailingWhitespace(char line[], int len);

	max = 0;
	// while there's another line 
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	
	if (max > 0) /* there was a line */
		printf("%s", longest);
	return 0;
}

// this reads a line into s then returns the length
int getline(char s[], int lim)
{
	int c, i;

	// for longest line and not end of file, string s is set to char
	// sets the second line
	for (i=0; i < lim -1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	// determines if end of line adds the character
	if (c=='\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

/* copy: copy from 'from' into 'to'; assume to is big enough*/
void copy (char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
			++i;
}

void removeTrailingWhitespace(char line[], int length)
{
	int i;

	for (i = length -2; i >= 0; --i)
	{
		if (line[i] == ' ' || line[i] == '\t')
			line[i] = '\0';
		else 
			break;
	}
}
