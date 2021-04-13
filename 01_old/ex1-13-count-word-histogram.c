#include <stdio.h>

#define IN 1
#define OUT 0

/* 打印输入中单词长度的直方图,最多10个单词 */
main() {
    int c;
    int state, last_state;
    int i, j, lengths[10], max_length;

    for (i = 0; i < 10; ++i)
        lengths[i] = 0;
    state = OUT;
    last_state = OUT;

    i = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else state = IN;

        if (state == IN)
            lengths[i]++;
        else if (state == OUT && last_state == IN) {
            i++;
        }

        last_state = state;
    }

    printf("\n");
    for (i = 0; i < 10; ++i) {
        for (j = 0; j < lengths[i]; ++j)
            printf("1");
        printf("\n");
    }

    max_length = 0;
    for (i = 0; i < 10; ++i)
        if (max_length < lengths[i]) max_length = lengths[i];
    printf("\n");
    for (j = max_length; j >= 0; j--) {
        for (i = 0; i < 10; i++) {
            if (j == lengths[i] - 1) {
                lengths[i]--;
                printf("1");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
/* 欲速则不达 */