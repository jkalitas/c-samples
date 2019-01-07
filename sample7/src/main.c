#include <stdio.h>
#include <stdbool.h>

/**
 * Solution for exercise 1-9 of book:
 * "The C Programing Language 2nd Edt"
 * Write a program to copy its input to its output, replacing each string of
 * one or more blanks by a single blank:
 * e.g("f    f" => "f f")
 */
int main() {

    int c,blank_read = 0;

    while ((c = getchar()) != EOF) {

        if(c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
            if (c == EOF)
                break;
        }
        putchar(c);
    }
    printf("EOF = %d\n", c);
    return 0;
}