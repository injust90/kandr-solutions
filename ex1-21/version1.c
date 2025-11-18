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

int my_getline(char line[], int maxline);
int entab(char s[], int lim);
void copy(char to[], char from[]);



// print longest input line; specialized version
int main()
{
	int len;
	int c;
	int lim = MAXLINE;
	char s[MAXLINE];

	for (int i = 0; i < lim -1; i++) {
		c = getchar();
		s[i] = c;
		if (c == '\n')
			printf("%s", s);
		if (c == EOF && c == '\n') {
			break;
		}
	}		

}
