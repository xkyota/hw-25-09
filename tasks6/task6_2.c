#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 4096

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <files...>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        FILE *fp = fopen(argv[i], "r");
        if (!fp) {
            printf("Cannot open file: %s\n", argv[i]);
            continue;
        }

        long size = 0;
        int lines = 1, words = 0;
        int in_word = 0;
        int c;

        fseek(fp, 0, SEEK_END);
        size = ftell(fp);
        rewind(fp);

        while ((c = fgetc(fp)) != EOF) {
            if (c == '\n')
                lines++;
            if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                words++;
            }
        }

        printf("Filename: %s\n", argv[i]);
        printf("Size (bytes): %ld\n", size);
        printf("Lines: %d\n", lines);
        printf("Words: %d\n\n", words);

        fclose(fp);
    }

    return 0;
}

//! With Copilot assistance