#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <file1> <file2> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        printf("=== %s ===\n", argv[i]);
        FILE *fp = fopen(argv[i], "r");
        if (!fp) {
            printf("Cannot open file '%s'\n", argv[i]);
            continue;
        }
        int ch;
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        fclose(fp);
    }
    return 0;
}