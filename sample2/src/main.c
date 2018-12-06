#include <stdio.h>
#define VALUE 5

int globalnum; //declaration of a global value

/**
 * This is a basic comment block.
 * @return the result of the program
 */
int main() {
    int some_int,other_int;
    long long_value;

    globalnum = VALUE;
    some_int = VALUE;
    other_int = VALUE;
    long_value = VALUE;

    long result = globalnum * some_int * other_int * long_value;
    printf("Product of all variables is = %ld\n",result);
    return 0;
}