#include <stdio.h>
#include <stdlib.h>

void to_upper(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

void to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

void reverse(char *str) {
    int len = 0;
    while (str[len]) len++;
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <operation> <strings...>\n", argv[0]);
        return 1;
    }

    char *op = argv[1];

    int is_upper = 1, is_lower = 1, is_reverse = 1, is_concat = 1;
    const char *upper_str = "upper";
    const char *lower_str = "lower";
    const char *reverse_str = "reverse";
    const char *concat_str = "concat";
    for (int i = 0; upper_str[i] || op[i]; i++) {
        if (upper_str[i] != op[i]) {
            is_upper = 0;
            break;
        }
    }
    for (int i = 0; lower_str[i] || op[i]; i++) {
        if (lower_str[i] != op[i]) {
            is_lower = 0;
            break;
        }
    }
    for (int i = 0; reverse_str[i] || op[i]; i++) {
        if (reverse_str[i] != op[i]) {
            is_reverse = 0;
            break;
        }
    }
    for (int i = 0; concat_str[i] || op[i]; i++) {
        if (concat_str[i] != op[i]) {
            is_concat = 0;
            break;
        }
    }

    if (is_upper) {
        for (int i = 2; i < argc; i++) {
            to_upper(argv[i]);
            printf("%s%s", argv[i], (i == argc - 1) ? "\n" : " ");
        }
    } else if (is_lower) {
        for (int i = 2; i < argc; i++) {
            to_lower(argv[i]);
            printf("%s%s", argv[i], (i == argc - 1) ? "\n" : " ");
        }
    } else if (is_reverse) {
        for (int i = 2; i < argc; i++) {
            reverse(argv[i]);
            printf("%s%s", argv[i], (i == argc - 1) ? "\n" : " ");
        }
    } else if (is_concat) {
        for (int i = 2; i < argc; i++) {
            printf("%s", argv[i]);
        }
        printf("\n");
    } else {
        return 1;
    }

    return 0;
}

//! With Copilot assistance