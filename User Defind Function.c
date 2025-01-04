#include <stdio.h>
#include <math.h>
/*Write a program to find the value of y for a particular value
of n. The a, x,b, n is input by user
if n=1 y=ax % b
if n=2 y=ax2 + b2
if n=3 y=a - bx
if n=4 y=a + xb*/
int operation(int a,int x,int b,int n)
{
	int y;

 if (n == 1)
	 {
        y = (int)pow(a, x) % b;
        printf("y = ax %% b = %d\n", y);
    }
    else if (n == 2)
	 {
        y = (int)(pow(a, x) + pow(b, 2));
        printf("y = ax^2 + b^2 = %d\n", y);
    }
    else if (n == 3)
	 {
        y = a - b * x;
        printf("y = a - bx = %d\n", y);
    }
    else if (n == 4)
	 {
        y = a + b * x;
        printf("y = a + xb = %d\n", y);
    }
    else
	 {
        printf("Invalid value of n! Please enter a value between 1 and 4.\n");
    }
}
int main()
 {
    int a, x, b, n, y;

    // Input values
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of n (1 to 4): ");
    scanf("%d", &n);

    operation(a,x,b,n);
   

    return 0;
}

