#include <stdio.h>
#include <stdlib.h>
#include "../libs/str_eq.h"

int main(int argc, char *argv[]) {
    int port = 8080;
    char host[256] = "localhost";
    int debug = 0;

    for (int i = 1; i < argc; i++) {
        if ((str_eq(argv[i], "--port") || str_eq(argv[i], "-p")) && i + 1 < argc) {
            port = atoi(argv[++i]);
        } else if ((str_eq(argv[i], "--host") || str_eq(argv[i], "-h")) && i + 1 < argc) {
            int j = 0;
            char *src = argv[++i];
            while (src[j] && j < 255) {
                host[j] = src[j];
                j++;
            }
            host[j] = '\0';
        } else if (str_eq(argv[i], "--debug") || str_eq(argv[i], "-d")) {
            debug = 1;
        }
    }

    printf("Host: %s\n", host);
    printf("Port: %d\n", port);
    if (debug) {
        printf("Debug: true\n");
    } else {
        printf("Debug: false\n");
    }

    return 0;
}