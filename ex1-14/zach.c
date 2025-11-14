#include <stdio.h>

int main(void) {
    int c, h[26] = {0};
    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z') h[c-'a']++;
        else if (c >= 'A' && c <= 'Z') h[c-'A']++;
    for (int i=0;i<26;i++) if(h[i]) {
        printf("%c ", 'a'+i);
        for(int j=0;j<h[i];j++) putchar('X');
        printf(" (%d)\n", h[i]);
    }
}
