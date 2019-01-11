#include <stdio.h>
#include <stdbool.h>

#define NUMBER 600851475143

int next_fibonnaci(int current, int previous);

/**
 * Euler project:
 * https://projecteuler.net/problem=3
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
int main() {

    long i = 0;
    long largest = 0;
    long result = 0;

    for (i = 2;i < NUMBER;i++) {
        if(NUMBER % i == 0 && NUMBER > largest){
            result =
        }
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