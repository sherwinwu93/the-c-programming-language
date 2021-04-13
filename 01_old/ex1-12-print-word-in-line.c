#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c;
    int state, last_state;

    last_state = state = OUT;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else state = IN;

        if (state == IN)
            putchar(c);
        else if (state != IN && last_state == IN)
            putchar('\n');
        last_state = state;
    }
}