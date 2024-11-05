#include <stdio.h>

int main()
 {
    int n1, n2, n3, greatest;

    
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);

    // Determine the greatest number using the ternary operator
    greatest = (n1 > n2) ? 
                   (n1 > n3 ? n1 : n3) : 
                   (n2 > n3 ? n2 : n3);


    printf("The greatest number is: %d\n", greatest);

    return 0;
}
