#include <stdio.h>
#include <math.h>

/* Write a program to print out all the Armstrong number
between 100 and 500 using user define function.*/
int Armstrong(int n)
 {
    int sum = 0, t = n,digits=0;
    
    
    
    while (t != 0)
	 {
        t = t/10;
        digits++;
    }
    
    t = n;

    while (t != 0)
	 {
        int digit = t % 10;
        sum =sum+ pow(digit, digits);
        t = t/10;
    }

    return (sum == n);
}

int main() 
{
	int i;
    printf("Armstrong numbers between 100 and 500 are:\n");
    for (i = 100; i <= 500; i++) 
	{
        if (Armstrong(i))
		 {
            printf("%d ", i);
        }
    }
    return 0;
}

