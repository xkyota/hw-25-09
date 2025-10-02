#include <stdio.h>
#include "../../libs/a2i.h"
#include "../../libs/len.h"

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
