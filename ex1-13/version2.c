#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, leading, j, k;

	leading = OUT;
	k, j = 0;

	// Declares ndigit to be an array of 10 integers
	int count[10];

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

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < count[k]; ++j)
			putchar('*');
		putchar(' ');
		++k;
	}

	printf("%d ", count[0]);
	printf("%d", count[1]);
}
