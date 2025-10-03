#include <stdio.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        char *s = argv[i];
        int num = 0;
        int valid = 1;

        for (; *s != '\0'; s++) {
            if (*s >= '0' && *s <= '9') {
                num = num * 10 + (*s - '0');
            } else {
                valid = 0;
                break;
            }
        }

        if (!valid) {
            printf("Warning: '%s' is not a number\n", argv[i]);
            continue;
        }

        sum += num;
    }

    printf("Sum: %d\n", sum);
    return 0;
}
