#include "len.h"
int len(char *text)
{
    int i = 0;
    while (text[i] != 0)
        i++;
    return i;
}