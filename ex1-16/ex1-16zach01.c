#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main() {
    char line[MAXLINE];
    char longest[MAXLINE];
    int len = 0, max_len = 0;

    printf("Enter text (Ctrl+D to end):\n");

    while (fgets(line, sizeof(line), stdin)) {
        len = strlen(line);

        while (len > 0 && line[len - 1] != '\n' && !feof(stdin)) {
            char cont[MAXLINE];
            if (!fgets(cont, sizeof(cont), stdin)) break;
            len += strlen(cont);
        }

        if (len > max_len) {
            max_len = len;
            strcpy(longest, line);
        }
    }

    if (max_len > 0)
        printf("\nMax length: %d\nText: %s\n", max_len, longest);

    return 0;
}
