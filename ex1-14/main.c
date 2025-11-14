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
		for (int j = 0; j < counter[i]; ++j) {
			putchar('*');
		}
		if (counter[i] > 0 && i != 10) {
			printf("%c Counter: %d\n", i, counter[i]);
		}
		else if (i == 10) {
			printf("\\n Counter: %d\n", counter[i]);
		}
	}

	return 0;
}
