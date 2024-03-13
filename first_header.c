#include <stdio.h>
#include <stdlib.h>
#include "first_header.h"


float a, b, x;
char c;

int calculator(){

    printf("write first number: \n");
    scanf("%f", &a);
    printf("write second number: \n");
    scanf("%f", &b);
    printf("write operation type( +, -, /, * ): \n");
    scanf(" %c", &c);

    switch (c){
        case '+':
            x= a+b;
            printf(" %.2f + %.2f = %.2f \n", a,b,x);
            break;
        case '-':
            x= a-b;
            printf(" %.2f - %.2f = %.2f \n", a,b,x);
            break;
        case '':
            x= ab;
            printf(" %.2f * %.2f = %.2f \n", a,b,x);
            break;
        case '/':
            while(b==0){
                printf("impossible operation, write second number: \n");
                scanf("%f", &b);
            }
            x= a/b;
            printf(" %.2f / %.2f = %.2f \n", a,b,x);
            break;
        default:
            printf("Invalid operation type!\n");
            break;

    }
}
