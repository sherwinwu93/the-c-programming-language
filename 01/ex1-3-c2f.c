#include <stdio.h>

/* 当fahr = 0, 20, ...,300,打印华氏`温氏温度对照表*/
main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* 温度表的下限 */
    upper = 300; /* 上限 */
    step = 20; /* 步长 */

    printf("f to c\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}