#include <stdio.h>
#include "../../libs/str_eq.h"

void print_help(const char *prog_name) {
    printf("Usage: %s [OPTIONS] [FILES...]\n", prog_name);
    printf("Options:\n");
    printf("  -v, --verbose   Enable verbose output\n");
    printf("  -h, --help      Show this help message\n");
}


int main(int argc, char *argv[]) {
    int verbose = 0;
    int show_help = 0;

    // Parse flags
    int i;
    for (i = 1; i < argc; ++i) {
        if (str_eq(argv[i], "-v") || str_eq(argv[i], "--verbose")) {
            verbose = 1;
        } else if (str_eq(argv[i], "-h") || str_eq(argv[i], "--help")) {
            show_help = 1;
        } else if (argv[i][0] == '-') {
            printf("Unknown option: %s\n", argv[i]);
            return 1;
        } else {
            break; 
        }
    }

    if (show_help) {
        print_help(argv[0]);
        return 0;
    }

    if (verbose) {
        printf("Verbose mode enabled.\n");
    }

    for (; i < argc; ++i) {
        printf("Processing file: %s\n", argv[i]);
    }

    return 0;
}