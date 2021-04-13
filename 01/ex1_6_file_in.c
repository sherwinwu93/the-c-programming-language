#include <stdio.h>

main() {
    int i;
    i = getchar() != EOF;
    // Ctrl+d
    printf("%d", i);
}
// 0还是1都不显示
// printf只接受字符串格式化