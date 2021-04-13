#include <stdio.h>

main() {
    int c;

    c = getchar();
    // 该字符不是文件结束指示符
    // EOF end of file
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}