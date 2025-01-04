#include <stdio.h>
/*Write a C program to find the H.C.F. of two numbers.*/
int main()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF is %d\n", a);
    return 0;
}

