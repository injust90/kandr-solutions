#include <stdio.h>

int main() {
    int c, in_word = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) putchar('\n');
            in_word = 0;
        } else {
            putchar(c);
            in_word = 1;
        }
    }
}
