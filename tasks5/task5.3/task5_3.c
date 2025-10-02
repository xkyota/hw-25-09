#include <stdio.h>
#include <stdlib.h>
#include "../../libs/str_eq.h"


int main(int argc, char *argv[]) {
    int verbose = 0;
    int number = 0;
    int number_set = 0;
    char *files[argc];
    int file_count = 0;

    for (int i = 1; i < argc; i++) {
        if (str_eq(argv[i], "-v")) {
            verbose = 1;
        } else if (str_eq(argv[i], "-n")) {
            if (i + 1 < argc) {
                number = atoi(argv[i + 1]);
                number_set = 1;
                i++; 
            } else {
                printf("Error: -n flag requires a number\n");
                return 1;
            }
        } else if (argv[i][0] == '-') {
            printf("Error: Unknown flag %s\n", argv[i]);
            return 1;
        } else {
            files[file_count++] = argv[i];
        }
    }

    printf("Verbose: %s\n", verbose ? "ON" : "OFF");
    if (number_set)
        printf("Number: %d\n", number);
    printf("Files:\n");
    for (int i = 0; i < file_count; i++) {
        printf("  %s\n", files[i]);
    }

    return 0;
}

//! With Copilot assistance 