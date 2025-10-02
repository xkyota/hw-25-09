#include <stdio.h>
#include <stdlib.h>
#include "../../libs/str_eq.h"


int main(int argc, char *argv[]) {
    int number = 0;
    char *output = NULL;
    int verbose = 0;
    char *input = NULL;

    for (int i = 1; i < argc; i++) {
        if (str_eq(argv[i], "-n") && i + 1 < argc) {
            number = atoi(argv[++i]);
        } else if (str_eq(argv[i], "-o") && i + 1 < argc) {
            output = argv[++i];
        } else if (str_eq(argv[i], "-v")) {
            verbose = 1;
        } else if (argv[i][0] != '-') {
            input = argv[i];
        }
    }

    printf("Number: %d\n", number);
    if (output)
        printf("Output: %s\n", output);
    else
        printf("Output: (none)\n");

    if (verbose)
        printf("Verbose: yes\n");
    else
        printf("Verbose: no\n");

    if (input)
        printf("Input: %s\n", input);
    else
        printf("Input: (none)\n");

    return 0;
}