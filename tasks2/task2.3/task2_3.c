#include <stdio.h>
#include "../../libs/a2i.h"
#include "../../libs/len.h"
#include "../../libs/myStrcmp.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage:\n");
        printf("  ./program --greet <name>\n");
        printf("  ./program --add <num1> <num2>\n");
        printf("  ./program --list\n");
        return 1;
    }

    if (myStrcmp(argv[1], "--greet") == 0)
    {
        if (argc != 3)
        {
            printf("Usage: ./program --greet <name>\n");
            return 1;
        }
        printf("Hello, %s!\n", argv[2]);
    }
    else if (myStrcmp(argv[1], "--add") == 0)
    {
        if (argc != 4)
        {
            printf("Usage: ./program --add <num1> <num2>\n");
            return 1;
        }
        int num1 = a2i(argv[2]);
        int num2 = a2i(argv[3]);
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (myStrcmp(argv[1], "--list") == 0)
    {
        if (argc != 2)
        {
            printf("Usage: ./program --list\n");
            return 1;
        }
        printf("Listing items...\n");
    }
    else
    {
        printf("Unknown operation: %s\n", argv[1]);
        printf("Usage:\n");
        printf("  ./program --greet <name>\n");
        printf("  ./program --add <num1> <num2>\n");
        printf("  ./program --list\n");
        return 1;
    }

    return 0;
}

