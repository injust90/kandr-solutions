#include <stdio.h>

int main()
{
	int c, n1, blanks, tabs;

	blanks = tabs = n1 = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			++tabs;

		else if (c != '\t')
			tabs = 0;

		if (tabs <= 1) {
			putchar(c);
		}
	}
}
