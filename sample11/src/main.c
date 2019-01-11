#include <stdio.h>

#define MAXLINE 1000 /*the maximum size of a line*/

int max_length;
char line[MAXLINE];
char longest[MAXLINE];
int get_line(void);

void copy(void);

/**
 * Print the longest input line example
 * "The C Programing Language 2nd Edt"
 */
int main() {
    int length;
//    extern int max_length;
    max_length = 0;

    while ((length = get_line()) > 0) {
        if (length > max_length) {
            max_length = length;
            copy();
        }
    }
    if (max_length > 0) {
        printf("\n####################################\n");
        printf("Max length:\n%d\n", max_length);
        printf("Longest line seen:\n%s\n", longest);
        printf("\n####################################\n");
    }
    return 0;
}

/**
 * Copy the input text to a char array.
 *
 * @param line char array to store input text.
 * @param max_line the maximum size of the text.
 * @return number of chars read from input.
 */
int get_line(void) {
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/**
 * Copy content from array to another array.
 * @param to destination array.
 * @param from array.
 */
void copy(void) {
    int i = 0;

    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
}