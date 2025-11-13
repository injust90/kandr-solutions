#include <stdio.h>

// count digits, white space, others

int main()
{
	int c, i, nwhite, nother;

	// Declares ndigit to be an array of 10 integers
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF) {
		// This test determines whether the character c is a digit. If it is, the numeric value of that digit 
		// is c ='0'. This decrements the characters in the array so that it corresponds to the ASCII table
		if (c >= '0' && c <= '9')
			// At position character, add to ndigit array.
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
		// printf("as char: %c | as int: %d | reduced: %d\n", c, c, c - '0');
	}

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n",
			nwhite, nother);
}
