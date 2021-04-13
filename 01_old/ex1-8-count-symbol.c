#include <stdio.h>
main() {
    int space_count, table_count, line_count;
    int c;

    for (c = getchar(); c != EOF; c = getchar()) {
        if (c == 32)
            ++space_count;
        if (c == '\t')
            ++table_count;
        if (c == '\n')
            ++line_count;
    }
    printf("%d\t%d\t%d\n", space_count, table_count, line_count);
}