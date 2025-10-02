#include <stdio.h>
#include "../../libs/len.h"

int main(int argc, char *argv[]) {
    int total_chars = 0;

    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int str_len = len(argv[i]);
        printf("String: '%s', Length: %d\n", argv[i], str_len);
        total_chars += str_len;
    }

    printf("Total character count: %d\n", total_chars);
    return 0;
}