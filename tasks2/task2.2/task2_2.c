#include <stdio.h>

int a2i(char *number);
int len(char *text)
{
    int i = 0;
    while (text[i] != 0)
        i++;
    return i;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Usage: ./task2_2.c <name> <age> \n");
        return 1;
    }
    else if (argc == 2)
    {
        printf("Hello %s!", argv[1]);
    }
    else if (argc == 3)
    {
        printf("Hello %s, you are %d years old!", argv[1], a2i(argv[2]));
    }
    else if (argc == 4)
    {
        printf("Hello %s, your are %d from %s", argv[1], a2i(argv[2]), argv[3]);
    }
    else
    {
        printf("Usage: ./task2_2.c <name> <age> \n");
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