#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{

    printf("Press (+) for Addition \n");
    printf("Press (-) for Subtraction \n");
    printf("Press (*) for Multiplication \n");
    printf("Press (/) for Division \n");
    printf("Press (^) for Exponential \n");
    printf("Type s to Square Root \n");
    printf("Type e for exit \n");


    int a, b, result;
        char selection;

    printf("Enter a number: ");
    scanf(" %d", &a);

    printf("Enter another number: ");
    scanf(" %d", &b);

    printf("Enter a selection: ");
    scanf(" %c", &selection);


    switch(selection) {

    case '+':
    result = a + b;
    printf("%d + %d = %d", a,b ,result);
    break;

    case '-':
    result = a - b;
    printf("%d - %d = %d", a,b ,result);
    break;

    case '*':
    result = a * b;
    printf("%d * %d = %d", a,b ,result);
    break;

    case '/':
    result = a / b;
    printf("%d / %d = %d", a,b ,result);
    break;

    case '^':
    result = pow(a,b);
    printf("Answer is %d", result);
    break;

    case 'e':
    exit(0);
    break;

    case 's':
    result = sqrt(a);
    printf("The square root is: %d", result);
    break;

    }}




