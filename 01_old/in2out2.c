#include <stdio.h>

/* copy input to output; 2st version */
main() {
    int c;

    /* EOF = -1 */
    while ((c = getchar()) != EOF) {
        putchar(c);
        c = getchar();
    }
}