#include <stdio.h>

int main() 
{
    int n,i,t;

    printf("Enter a number ");
    scanf("%d", &n);
   for(i=10;1<=i;i--)
   {
    printf("%d*%d=%d\n",n,i,i*n);
   }

    return 0;
}
