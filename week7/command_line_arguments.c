// Nicole, 23T3 Week 7
// Tutorial demo: Command Line Arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    // print total number of command line arguments
    printf("Total command line arguments: %d\n", argc);

    // print each command line argument on a new line 
    // with the index of the line

    for (int i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }

    return 0;
}