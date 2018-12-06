#include <stdio.h>

/**
 * This program will display the size of most of data types in C
 * Note that this can be different depending on the architecture.
 *
 * @return
 */
int main() {
    int some_int;
    long long_value;
    char char_value;
    double double_value;
    float float_value;
    short short_value;
    long int long_int_value;
    long long long_long_value;
    long double long_double_value;

    //my compiler doesn't recognize
    //long float long_float_value;

    printf("########  DATA TYPE SIZES: \n");
    printf("INT = %lu\n", sizeof(some_int));
    printf("LONG = %lu\n", sizeof(long_value));
    printf("CHAR = %lu\n", sizeof(char_value));
    printf("DOUBLE = %lu\n", sizeof(double_value));
    printf("FLOAT = %lu\n", sizeof(float_value));
    printf("SHORT = %lu\n", sizeof(short_value));
    printf("LONG INT  = %lu\n", sizeof(long_int_value));
    printf("LONG LONG = %lu\n", sizeof(long_long_value));
    printf("LONG DOUBLE = %lu\n", sizeof(long_double_value));

//    printf("LONG FLOAT = %lu\n", sizeof(long_float_value));
    return 0;
}