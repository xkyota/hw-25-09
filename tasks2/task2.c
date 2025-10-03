#include <stdio.h> 
#include "../libs/a2i.h"
#include "../libs/len.h"


int main(int argc, char* argv[]) 
{ 
    if (argc > 3)
    {
        printf("Usage: ./program <name> <age> \n"); 
        return 1; 
    }   

    printf("Hello %s, you are %d years old!", argv[1], a2i(argv[2])); 

    return 0; 
}
