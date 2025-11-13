#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, state;

	state = OUT;

	// Declares ndigit to be an array of 10 integers
	int count[10];

	for (int i = 0; i < 10; ++i)
		count[i] = 0;


	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				state = OUT;
			}
		}
		else {
			++count[0];
			state = IN;
		}
	}

	printf("%d", count[0]);

	for (int i = 0; i < count[0]; ++i)
	{
		putchar('*');
	}
}
