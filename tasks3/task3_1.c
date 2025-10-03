#include <stdio.h>
#include "../libs/a2i.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./calc <num1> <operator> <num2>\n");
        return 1;
    }

    int num1 = a2i(argv[1]);
    int num2 = a2i(argv[3]);
    char op = argv[2][0];
    int result;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%d\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d\n", result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error: Division by zero\n");
            return 1;
        }
        result = num1 / num2;
        printf("%d\n", result);
        break;
    default:
        printf("Error: Unknown operator '%c'\n", op);
        return 1;
    }

    return 0;
}
