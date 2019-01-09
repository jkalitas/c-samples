#include <stdio.h>
#include <stdbool.h>

/**
 * Solution for exercise 1-10 of book:
 * "The C Programing Language 2nd Edt"
 * Write a program to copy its input to
 * its output, replacing each tab by\t,
 * each back spaceby \b, and each back slash by\\.
 * This makes tabs and backspaces visible in an unambiguous way
 */
int main() {

    int c,blank_read = 0;

    while ((c = getchar()) != EOF) {

        if(c == '\t') {
            putchar('\\');
            putchar('t');

        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }

        putchar(c);
    }

    return 0;
}