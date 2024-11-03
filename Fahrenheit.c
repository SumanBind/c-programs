#include <stdio.h>

void main() 
{
    float fahrenheit, celsius,cel,fah;
    
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        cel = (fahrenheit - 32) * 5 / 9;
        printf("Converted Celsius =%f\n", cel);

        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fah = (celsius * 9 / 5) + 32;
        printf("Converted Fahrenheit  =%f", fah);
    
}
