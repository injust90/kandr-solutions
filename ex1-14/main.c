#include <stdio.h>

int main() {
	int c;
	int counter[255];

	for (int i = 0; i < 255; ++i) {
		counter[i] = 0;
	}

	while ((c = getchar())!= EOF)
	{
		++counter[c];
	}

	int character = 'a';

	for (int i = 0; i < 255; ++i) {
		if (counter[i] > 0 && i != 10) {
			printf("%c Counter: %d", i, counter[i]);
			for (int j = 0; j < counter[i]; ++j) {
				putchar('*');
			}
			putchar('\n');
		}
		else if (i == 10) {
			printf("\\n Counter: %d", counter[i]);
			for (int j = 0; j < counter[i]; ++j) {
				putchar('*');
			}
			putchar('\n');
		}
	}
	return 0;
}
