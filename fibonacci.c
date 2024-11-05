#include <stdio.h>

int main()
 {
    int n, i,a,b,c;
    a=0;
    b=1;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

        printf("Fibonacci Series: \n");
        printf("%d %d ",a,b);
        for (i = 0; i < n; i++)
         {
            c=a+b;
            a=b;
            b=c;
            printf(" %d",c);
    }

    return 0;
}
