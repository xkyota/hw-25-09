#include <stdio.h>

int a2i(char *number);
int myStrcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

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

int a2i(char *number)
{
    int result = 0;
    int i = 0;
    int sign = 1;

    if (number[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (number[i] != '\0')
    {
        if (number[i] < '0' || number[i] > '9')
        {
            break;
        }
        result = result * 10 + (number[i] - '0');
        i++;
    }

    return sign * result;
}