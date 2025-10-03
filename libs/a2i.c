#include "a2i.h"

int a2i(char* number)
{ 
    int result = 0;
    int i = 0;
    int sign = 1;

    if (number[0] == '-') {
        sign = -1;
        i++;
    }

    while (number[i] != '\0') {
        if (number[i] < '0' || number[i] > '9') {

            break;
        }
        result = result * 10 + (number[i] - '0');
        i++;
    }

    return sign * result;
}