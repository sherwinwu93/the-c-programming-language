#include <stdio.h>
main () {
    int c;

    c = getchar() != EOF;
    printf("%d", c);
}
/* ctrl+D为0,其他为1