#include <stdio.h>

int main() {
    int choice;
    double value, result;

    printf("Unit Conversion Program\n");
    printf("Select the conversion type:\n");
    printf("1. Centimeters to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Kilograms to Grams\n");
    printf("4. Grams to Kilograms\n");
       printf("Enter your choice (1-4): ");
    scanf("%d", &choice);


    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    switch(choice)
	 {
        case 1:
            result = value / 100;
            printf("%.2lf cm = %.2lf meters\n", value, result);
            break;
        case 2:
            result = value * 100;
            printf("%.2lf meters = %.2lf cm\n", value, result);
            break;
        case 3:
            result = value * 1000;
            printf("%.2lf kg = %.2lf grams\n", value, result);
            break;
        case 4:
            result = value / 1000;
            printf("%.2lf grams = %.2lf kg\n", value, result);
            break;
        
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

