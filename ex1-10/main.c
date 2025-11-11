#include <stdio.h>

int main()
{
	int c, n1, blanks, tabs;

	blanks = tabs = n1 = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			++tabs;
		else
			tabs = 0;

		if (c == ' ')
			++blanks;
		else
			blanks = 0;

		if (c == '\n')
			++n1;
		else
			n1 = 0;

		if (tabs <= 1 && blanks <= 1 && n1 <= 1) {
			putchar(c);
		}
	}
}
