#include <stdio.h>

/* 当fahr = 0, 20, ...,300,打印华氏`温氏温度对照表*/
main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = -18; /* 温度表的下限 */
    upper = 149; /* 上限 */
    step = 11; /* 步长 */

    celsius = lower;
    while (celsius <= upper) {
        fahr = 9 * celsius / 5 + 32;
        printf("%3d\t%6d\n", celsius, fahr);
        celsius = celsius + step;
    }
}