#include <stdio.h>

void  main() 
{
    int a, b;


    printf("Enter first number a : ");
    scanf("%d", &a);
    printf("Enter second number b : ");
    scanf("%d", &b);


    printf("Before swapping: a = %d, b = %d\n", a, b);

     a = a ^ b;
    b = a ^ b; 
    a = a ^ b;

    
    printf("After swapping: a = %d, b = %d\n", a, b);



}
