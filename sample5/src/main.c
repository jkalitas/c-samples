#include <stdio.h>
#define FREEZE_POINT 32

/**
 * Prints temperature conversions between Celsius and Farenheit scales.
 */
int main() {
    const int multiply_factor = 5;
    const int divider_factor = 9;

    int ceslius,farenheit;
    int lower, upper, step;

    lower = 0;      /*lower limit in temp table*/
    upper = 300;    /*upper limit*/
    step = 20;      /*step size*/

    farenheit = lower;
    printf("FARENHEIT\t|\tCELSIUS\n");
    while (farenheit <= upper){
        ceslius = multiply_factor * (farenheit-FREEZE_POINT) / divider_factor;
        printf("%d\t|\t%d\n",farenheit,ceslius);
        farenheit += step;
    }

    return 0;
}