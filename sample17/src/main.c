#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <time.h>


#define _POSIX_C_SOURCE 200809L
#define NUMBER 600851475143
#define TRUE 1
#define FALSE 0

int is_prime(long number);
void print_current_time_with_ms(void);
/**
 * Euler project:
 * https://projecteuler.net/problem=3
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600 851 475 143 ?
 */
int main() {

    long long current = 600851475143;
    int i = 3; // start at 3 for primes... we can do this since subject is ODD
    int high = 0;


    while (1)
    {
        while (!(current % i)) // while no remainder
        {
            current /= i;  // divide and replace
            high = i;
        }

        if (current == 1)
            break;


        i +=2 ; // skip all even numbers since not prime
    }


    printf ("Highest prime factor of 600851475143 is %d\n", high);
    return 1;
//    print_current_time_with_ms();
//    long i = 2;
//    long largest = 0;
//    long result = 0;
////    long n = 13194;
////
////    printf("%ld\n", n);
////
////    while( i * i <= NUMBER){
////
////        while (n % i == 0){
////            printf("%ld\n", n);
////            n = n / i;
////            printf("%ld\n", n);
////            i++;
////            printf("%ld\n", n);
////        }
////    }
//
////    printf("%ld\n", n);
////
//    for (i = NUMBER - 1; i > 1; i--) {
//        if ((NUMBER % i) == 0) {
//            if (is_prime(i)) {
//                printf("%ld\n", i);
//            }
//        }
//    }
//
//    print_current_time_with_ms();
}


/**
 * Implementation of algorithm described here:
 * https://en.wikipedia.org/wiki/AKS_primality_tests
 *
 * Determines if a value is a prime number.
 *
 * @param number value to be inspected;
 * @return true or false accordingly;
 */
int is_prime(long number) {

    //special cases
    if (number == 1) {
        return FALSE;
    }
    if (number == 3) {
        return TRUE;
    }
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (number % 2 == 0 || number % 3 == 0) return FALSE;

    for (int i = 5; i * i <= number; i = i + 6)
        if (number % i == 0 || number % (i + 2) == 0)
            return FALSE;

    return TRUE;
}

void print_current_time_with_ms(void)
{
    long            ms; // Milliseconds
    time_t          s;  // Seconds
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);

    s  = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6); // Convert nanoseconds to milliseconds
    if (ms > 999) {
        s++;
        ms = 0;
    }

    printf("Current time: %"PRIdMAX".%03ld seconds since the Epoch\n",
            (intmax_t)s, ms);
}