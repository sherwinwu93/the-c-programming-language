#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* 当fahr = 0, 20, ...,300,打印华氏`温氏温度对照表 浮点型版本*/
main() {
    float fahr, celsius;

    // 运算之前先转成浮点型
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
}