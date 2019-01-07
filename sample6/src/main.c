#include <stdio.h>

/**
 * Solution for exercise 1-8 of book:
 * "The C Programing Language 2nd Edt"
 * Write a program to count blanks, tabs, and newline
 */
int main() {
    int c,line_counter,tab_counter,space_counter;

    line_counter = 0;
    space_counter = 0;
    tab_counter = 0;

    while ((c = getchar()) != EOF ) {

        if (c == '\n')
            ++line_counter;

        if (c == '\t')
            ++tab_counter;

        if (c == ' ')
            ++space_counter;
    }

    printf("Read %d lines from input stream!!!\n",line_counter);
    printf("Read %d tabs from input stream!!!\n",tab_counter);
    printf("Read %d spaces from input stream!!!\n",space_counter);

    return 0;
}