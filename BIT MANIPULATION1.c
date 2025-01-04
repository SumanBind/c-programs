#include <stdio.h>
#include <stdlib.h>
/*Given two integers say a and b. Find the quotient after
dividing a by b without using multiplication, division, and
mod operator.
Example:
Input: a = 10, b = 3, Output: 3
Input : a = 43, b = -8, Output : -5*/
int main() 
{
    int a, b, quotient = 0, negative = 0;

    // Input values
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    
    if (b == 0) 
	{
        printf("Error: Division by zero is not allowed.\n");
        return -1;  
    }


    if ((a < 0) != (b < 0)) 
	{
        negative = 1;
    }

    
    a = abs(a);
    b = abs(b);

    
    while (a >= b) 
	{
        a -= b;
        quotient++;
    }

    
    if (negative) 
	{
        quotient = -quotient;
    }


    printf("The quotient of the division is: %d\n", quotient);

    return 0;
}

