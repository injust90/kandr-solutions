#include <stdio.h>
#include <string.h>
#define MAXLINE 3 

int getline(char line[], int maxline);
int main() {
    char line[MAXLINE];
    char longest[MAXLINE];
    int len = 0, max_len = 0;

    printf("Enter text (Ctrl+D to end):\n");

// while you are getting in the sentence, you are setting length to the strlen of the sentence
	// using fgets to read in the sentence

    while ((line, sizeof(line), stdin)) {
        len = strlen(line);

	// while length is greater than zero and character is not equal to \n, and not EOF
        while (len > 0 && line[len - 1] != '\n' && !feof(stdin)) {
		// set array equal to the pre-established limit
		char cont[MAXLINE];
		// if fgets isnot available, break
            if (!fgets(cont, sizeof(cont), stdin)) break;
		// length += length
            len += strlen(cont);
        }

	// compare to establish longest length
        if (len > max_len) {
            max_len = len;
            strcpy(longest, line);
        }
    }

    if (max_len > 0)
        printf("\nMax length: %d\nText: %s\n", max_len, longest);

    return 0;
}

int getline1(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}
