#include <stdio.h>
/*Write a program to receive a five-digit no and display as
like
24689:
2
4
6
8
9*/
int main() 
{
    int n;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);

        while (n != 0)
		 {
            printf("%d\n", n % 10);
            n/= 10;
        }
    
    return 0;
}

