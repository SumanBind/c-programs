#include <stdio.h>

int main() 
{
    int n,i,p=0;

    printf("Enter a number ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        p=p+1;

    }
    if(p==2)
     {

     printf("\n%d is prime number",n);
     
     }
     else{
        printf("\n%d is not prime number",n);
     
     }

    return 0;
}
