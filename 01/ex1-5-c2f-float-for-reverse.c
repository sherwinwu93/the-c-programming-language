#include <stdio.h>

/* 当fahr = 0, 20, ...,300,打印华氏`温氏温度对照表 浮点型版本*/
main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* 温度表的下限 */
    upper = 300; /* 上限 */
    step = 20; /* 步长 */

    for (fahr = upper; fahr >= lower; fahr = fahr - step) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
}