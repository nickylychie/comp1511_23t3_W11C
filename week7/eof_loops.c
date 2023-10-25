// Nicole, 23T3 Week 7
// Tutorial demo: EOF loops

#include <stdio.h>
#include <string.h>

#define MAX_LETTERS 100

int main (void) {

    char my_var[MAX_LETTERS];
    while (fgets(my_var, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s", my_var);
        fputs(my_var, stdout);
    }

    return 0;
}