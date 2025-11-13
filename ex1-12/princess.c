#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main()
{
	int c, n1, nw, nc, state, leading;

	state = OUT;
	leading = OUT;
	n1 = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (leading == IN) {
				putchar('\n');
				leading = OUT;
			}
		}
		else {
			state = IN;
			leading = IN;
		}
		if (state == IN) {
			putchar(c);
		}
	}
}
