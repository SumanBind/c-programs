#include <stdio.h>

int main() 
{
    int n;

    printf("Enter a number ");
    scanf("%d", &n);
    if(n>0&&(n&(n-1))==0)
    {
        printf("  number %d is power of 2",n);

    }
     else
     {

     printf("number %d is not power of 2",n);
     
     }

    return 0;
}
