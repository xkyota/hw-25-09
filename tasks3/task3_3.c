#include <stdio.h>
#include "../libs/a2i.h"


int main(int argc, char *argv[])
{ 
    if (argc < 2)
    {
        printf("Usage: ./program 10 5 20 15 2\n"); 
        return 1; 
    }

    int sum = 0;
    int minimum = a2i(argv[1]);
    int maximum = a2i(argv[1]);
    int i;

    for (i = 1; i < argc; i++)
    {
        int value = a2i(argv[i]);
        sum += value;
        if (value < minimum) minimum = value;
        if (value > maximum) maximum = value;
    }

    float average = (float)sum / (argc - 1);

    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
    printf("Minimum is %d\n", minimum);
    printf("Maximum is %d\n", maximum);

    return 0; 
}
