#include <stdio.h>
#define N 3 

void reverse_line(char *s) {
    int left = 0;
    int right = 0;

    while (s[right] && s[right] != '\n') {
        right++;
    }

    if (right > 0) {
        right--;
    }

    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}

int main(void) {
    char buf[N];

    while (fgets(buf, N, stdin)) {
        reverse_line(buf);
        fputs(buf, stdout);
    }

    return 0;
}
