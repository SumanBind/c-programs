#include <stdio.h>
#include <math.h>

void main() 
{

    float p, r, t, amount, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &r);
    printf("Enter time (in years): ");
    scanf("%f", &t);


    amount = p * pow((1 + r / 100), t);
    compound_interest = amount - p;

    printf("Compound Interest = %f\n", compound_interest);
    printf("Total Amount = %f\n", amount);

}
