#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	printf("EOF: %d\n", EOF);

	for (int i = 0; i <= 128; ++i)
	{
		printf("%d = ", i);
		putchar(i);
		printf("\n");
	}
}
