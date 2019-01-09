#include <stdio.h>
#include <stdbool.h>

/**
 * Solution for exercise 1-12 of book:
 * "The C Programing Language 2nd Edt"
 * Write a program that prints it's input
 * one word per line
 */
int main() {
    int c,blank_read = 0;

    while ((c = getchar()) != EOF) {
        if(c == ' ') {
            putchar('\n');
            c = getchar();
        }
        putchar(c);
    }
    return 0;
}