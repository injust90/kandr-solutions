#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, leading, j, k;

	leading = OUT;
	k = j = 0;

	// Declares ndigit to be an array of 10 integers
	int count[10];
	int spaces[10];

	for (int i = 0; i < 10; ++i)
		count[i] = 0;


	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (leading == IN) {
				leading = OUT;
				++j;
			}
		}
		else {
			++count[j];
			leading = IN;
		}
	}

	// printf("Count: %d ", count[0]);
	// printf("Count: %d ", count[1]);
	// printf("Count: %d\n ", count[2]);

	for (int i = 0; i < 10; ++i) {
		for (int k = 0; k < 10; ++k) {
			if (count[k] <= i)
				putchar(' ');
			if (count[k] > i) {
				putchar('*');
				// printf("count[k]: %d ", count[k]);
			}
		}
		putchar('\n');
	}
}
