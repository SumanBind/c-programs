#include<stdio.h>
int main()
{
   int a,b,c,d;
   printf("Enter three number a,b and c\n");
   scanf("%d%d%d",&a,&b,&c);
   d=(a>b)?(a>c?a:c):(b>c?b:c);
   printf("Largest Number:");
   printf("%d",d);
   
    return 0;
}
