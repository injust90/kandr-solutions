#include <stdio.h>

int main() {
	int c;
	int counter[255];

	while ((c = getchar())!= EOF)
	{
		if (c == 97)
			counter[97] += 1;
	}

	int character = 'a';
	printf("%d Counter: %d", character, counter[97]);

	return 0;
}
