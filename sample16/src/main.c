#include <stdio.h>
#include <stdbool.h>

#define LIMIT 4000000

int next_fibonnaci(int current, int previous);

/**
 * Euler project:
 * https://projecteuler.net/problem=2
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the
 * first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the
 * even-valued terms.
 */
int main() {
    int fibonnaci = 1,sum = 0, previous = 1;

    while (fibonnaci < LIMIT) {
        if ((fibonnaci % 2) == 0){
            sum += fibonnaci;
        }
        int temp = fibonnaci;
        fibonnaci = next_fibonnaci(fibonnaci,previous);
        previous = temp;
    }
    printf("RESULT = %d\n",sum);
    return 0;
}

/**
 * Determines the next value of the fibbonaci sequence.
 * @param current fibonnaci value;
 * @param previous fibonnaci value;
 * @return next fibonnaci value;
 */
int next_fibonnaci(int current, int previous) {
    return current + previous;
}