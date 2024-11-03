#include <stdio.h>
#include <math.h>  

void main() 
{
    float radius, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    area = M_PI * radius * radius;           // Area = π * r²
    perimeter = 2 * M_PI * radius;           // Perimeter = 2 * π * r

    
    printf("Area of the circle: %f\n", area);
    printf("Perimeter  of the circle: %f\n", perimeter);
}
