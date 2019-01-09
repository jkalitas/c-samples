#include <stdio.h>

#define MAXLINE 1000 /*the maximum size of a line*/

int get_line(char line[], int max_line);

void copy(char to[], char from[]);

/**
 * Print the longest input line example
 * "The C Programing Language 2nd Edt"
 */
int main() {
    int length;
    int max_length;
    char line[MAXLINE];
    char longest[MAXLINE];

    max_length = 0;
    while ((length = get_line(line, MAXLINE)) > 0) {
        if (length > max_length) {
            max_length = length;
            copy(longest, line);
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
int get_line(char line[], int max_line) {
    int c, i;

    for (i = 0; i < max_line - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
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
void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}