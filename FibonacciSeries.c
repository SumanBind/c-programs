#include <stdio.h>
/*Write a C program to print the of the Fibonacci series*/
int main() 
{
    int n, a = 0, b = 1, next,i;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++)
	 {
        if (i == 0)
		 {
            printf("%d ", a);
            continue;
        }
        if (i == 1)
		 {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    return 0;
}

