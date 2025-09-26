#include <stdio.h>

int myStrlen(char* string) {
    int i = 0;
    while (string[i] != 0) i++;
    return i;
}

int main(int argc, char *argv[]) {
    int total_chars = 0;

    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int len = myStrlen(argv[i]);
        printf("String: '%s', Length: %d\n", argv[i], len);
        total_chars += len;
    }

    printf("Total character count: %d\n", total_chars);
    return 0;
}