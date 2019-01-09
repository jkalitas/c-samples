#include <stdio.h>
#include <stdbool.h>

#define DENOMINATOR_3 3
#define DENOMINATOR_5 5
#define LIMIT 1000

/**
 * Solution for exercise proposed on the
 * Euler project:
 * https://projecteuler.net/problem=1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these
 * multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
int main() {
    int i, sum = 0;

    for (int i = 1; i < LIMIT; ++i) {
        if ((i % DENOMINATOR_3) == 0 || (i % DENOMINATOR_5) == 0 ){
            sum+=i;
        }
    }
    printf("TOTAL = %d\n",sum);
    return 0;
}