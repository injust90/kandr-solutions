#include <stdio.h>

int main()
{
	int c, n1, blanks, tabs;

	blanks = tabs = n1 = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++n1;
		if (c == ' ')
			++blanks;
		if (c == '\t')
			++tabs;
	}
	printf("Newlines: %d\n", n1);
	printf("blanks: %d\n", blanks);
	printf("tabs: %d\n", tabs);
}
