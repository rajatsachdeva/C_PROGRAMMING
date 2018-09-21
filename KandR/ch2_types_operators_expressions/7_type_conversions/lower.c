#include <stdio.h>

/* lower: convert c to lower case; ASCII only */
int lower (int c) {

    if(c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int main() {
    printf("%c\n", lower('A'));
    printf("%c\n", lower('a'));
    return 0;
}
