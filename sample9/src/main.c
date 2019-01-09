#include <stdio.h>
#include <stdbool.h>

#define IN 1    /*inside a word*/
#define OUT 0   /*ouside a word*/

/**
 * Code from:
 * "The C Programing Language 2nd Edt"
 * A simple version of UNIX 'wc' command.
 * This counts lines, words and chars from input
 */
int main() {

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf(" NewLines = %d\n",nl);
    printf(" Words = %d\n",nw);
    printf(" Chars = %d\n",nc);

    return 0;
}