#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len; 		// Current line length
	int max; 		// maximum length seen so far
	char line[MAXLINE];	// Current input line
	char longest[MAXLINE];  // longest line saved here
	int index1;
	int index2;
	max = 0;
	while (1) {
		index1 = index2 = 0;
		char c;
		int check = 0;
		while((c = getchar()) != '\n' && c != EOF) { //Read line into buffer
			line[index1++] = c;
		}
		check = c == EOF;

		line[index1] = '\0';
		index1 = 0;
		while ((c = line[index1++]) != '\0') {
			if (index1 <= index2 || (c != ' ' && c != '\t'))
				printf("%c", c);
			else {
			    index2 = index1 - 1;
				while ((c = line[index2++]) != '\0' && (c == ' ' || c == '\t'));
				if (c == '\0')
				    index1 = index2;
			}
		}
		if (check == 0 && index1 > 1)
		    printf("\n");
		if (check)
		    break;
	}

	return 0;
}

// getline: read a line into s, return length
int get_line(char s[], int lim)
{
	int c, i;

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

	while ((to[i] = from[i]) != '\0')
		++i;
}
