#include <stdio.h>
#include <stdlib.h>

int a2i(char *number);

int is_valid_base(int base)
{
    return base == 2 || base == 8 || base == 10 || base == 16;
}

int is_valid_number(const char *num, int base)
{
    char *endptr;
    strtol(num, &endptr, base);
    return *endptr == '\0';
}

void print_in_base(long value, int base)
{
    char buffer[65];
    const char digits[] = "0123456789ABCDEF";
    int i = 0;

    if (value == 0)
    {
        printf("0\n");
        return;
    }

    long abs_value = value < 0 ? -value : value;
    if (value < 0)
        putchar('-');
    while (abs_value > 0)
    {
        buffer[i++] = digits[abs_value % base];
        abs_value /= base;
    }
    for (int j = i - 1; j >= 0; --j)
        putchar(buffer[j]);
    putchar('\n');
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <number> <from_base> <to_base>\n", argv[0]);
        return 1;
    }

    int from_base = a2i(argv[2]);
    int to_base = a2i(argv[3]);

    if (!is_valid_base(from_base) || !is_valid_base(to_base))
    {
        fprintf(stderr, "Error: Supported bases are 2, 8, 10, 16.\n");
        return 1;
    }

    if (!is_valid_number(argv[1], from_base))
    {
        fprintf(stderr, "Error: Invalid number for base %d.\n", from_base);
        return 1;
    }

    char *endptr;
    long value = strtol(argv[1], &endptr, from_base);

    print_in_base(value, to_base);

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

//! With Copilot assistance

//* strtol() = string → long
//* It’s a function in C that takes text (a string) and tries to turn it into a number (a long int).