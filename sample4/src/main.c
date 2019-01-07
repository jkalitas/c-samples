#include <stdio.h>

/**
 * Some interesting bitwise operators.
 */
int main() {
    int integer_value = 2; /*< Binary = 00 000 010 */

    //Shifting the integer value one bit to the left will transform
    // 00 000 001 into 00 000 100 which represents the integer value 4
    int shifted = integer_value << 1;
    printf("Shifted value = %d\n", shifted);

    int other_int_value = 4; /*< Binary = 00 000 100 */

    //The or operator will result bit representation 00 000 110
    // which represents the integer value 6
    int or_operated = other_int_value | integer_value;
    printf("OR operator = %d\n", or_operated);

    return 0;
}