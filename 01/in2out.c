#include <stdio.h>

/* copy input to output; 1st version */
main() {
    int c;

    c = getchar();
    /* EOF = -1 */
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}