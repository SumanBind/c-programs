#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); 

    
    result = (op == '+') ? (num1 + num2) :
             (op == '-') ? (num1 - num2) :
             (op == '*') ? (num1 * num2) :
             (op == '/' && num2 != 0) ? (num1 / num2) :
             -1;

    
    if (result != -1)
     {
        printf("The result is: %f\n", result);
    } 
    else
     {
        printf("Invalid operator or division by zero.\n");
    }

    return 0;
}
