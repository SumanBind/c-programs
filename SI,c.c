#include<stdio.h>
void main() 
{
    
    float p, rate, time,i;

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest : ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    i= (p * rate * time) / 100;
    printf("Simple Interest = %f\n", i);

}
