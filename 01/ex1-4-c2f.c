#include <stdio.h>
/* celsius transfer to fahr */
main() {
    float celsius, fahr;
    float lower, upper, step;

    lower = -273.15;
    upper = 273.15;
    step = 20.0;

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        printf("%.2f\t%.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}