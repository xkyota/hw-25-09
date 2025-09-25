#include <stdio.h> 

int a2i(char* number); 
int len(char* text) { int i = 0; while (text[i] != 0) i++; return i; }


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