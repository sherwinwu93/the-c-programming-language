#include <stdio.h>

main() {
    int c;

    // 该字符不是文件结束指示符
    // EOF end of file
    // c = getchar() != EOF 等价于 c = (getchar() != EOF)
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}