#include <stdio.h>

int main()
{
	int c, n1, blanks, tabs;

	blanks = tabs = n1 = 0;

	while ((c = getchar())!= EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}	
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
