#include <stdio.h>
main() {
    int c, last_c;

    last_c = EOF;
    while ((c = getchar()) != EOF) {
        if (c != 32 || last_c != 32)
            putchar(c);
        last_c = c;
    }
}