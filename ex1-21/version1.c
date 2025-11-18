// Ex 1-21 Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. 
// Use the same tab as for detab. When either a tab or single blank would suffice to reach a tab stop, which should be given preference?
#include <stdio.h>

#define MAXLINE 1000 // Maximum input line size
#define IN 1
#define OUT 0

int max; // Mximum length seen so far
int state = OUT;
char line[MAXLINE]; // Current input line
char longest [MAXLINE]; // Longest line saved here

int entab(char s[], int lim);
void copy(char to[], char from[]);

// print longest input line; specialized version
int main()
{
	int len;
	

	// printf("        8spaces\n");
	// printf("       	7spaces1tab\n");
	// printf("    	4spaces1tab\n");
	while ((len = entab(line, MAXLINE)) > 0)
		printf("%s", line);
	return 0;
}

int entab(char s[], int lim)
{
	int c, i, j;
	j = 0;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == ' ') {
			++j;
			if (j == 2) {
				printf("Hello World!\n");
				s[i] = '^';
				j = 0;
			}
		}
		else {
			s[i] = c;
		}
	}

	// if (c == '\n') {
	// 	s[i] = c;
	// 	++i;
	// }
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

