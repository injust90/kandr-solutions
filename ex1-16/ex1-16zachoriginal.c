#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main() {
    char line[MAXLINE];
    char longest[MAXLINE];
    int len = 0, max_len = 0;

    printf("Enter text (Ctrl+D to end):\n");

    // fgets reads characters from the character stream and stores them in the character array
    // stores the line first by limit of the size of the string stdin is the stream
    // then you set length to the string length
    while (fgets(line, sizeof(line), stdin)) {
        len = strlen(line);

	// while length is greater than zero AND line at point is \n, AND foef stdin
        while (len > 0 && line[len - 1] != '\n' && !feof(stdin)) {
            char cont[MAXLINE];
            if (!fgets(cont, sizeof(cont), stdin)) break;
            len += strlen(cont);
        }

	// if length greater than max length
	// max length is length
	// strcpy longest to line
        if (len > max_len) {
            max_len = len;
            strcpy(longest, line);
        }
    }

    if (max_len > 0)
        printf("\nMax length: %d\nText: %s\n", max_len, longest);

    return 0;
}
