#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    printf("Press (+) for Addition \n");
    printf("Press (-) for Subtraction \n");
    printf("Press (*) for Multiplication \n");
    printf("Press (/) for Division \n");
    printf("Press (^) for Exponential \n");
    printf("Type (sqrt) to Square Root \n");
    printf("Type (exit) for exit \n");

    char operation[4];
    char *sqrt = "sqrt";

    gets(operation);
    //printf(sqrt);

    while (strcmp(sqrt,operation) != 0) {
        printf("You selected sqrt!");
        break;
    }


    }



