#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main()
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			putchar('\n');
		}
		else {
			state = IN;
		}
		if (state == IN) {
			putchar(c);
		}
	}
}
