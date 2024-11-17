#include<stdio.h>
void main()
{
    int call;
    float bill=0;
    printf("enter number of calls");
    scanf("%d",&call);
    if(call<=50)
    {
        bill=100;
    }
    else if(call<=100)
    {
            bill=100+0.80*(call-50);
    }
    else if(call<=200)
    {
        bill=100+0.8*50+0.60*(call-100);
    }
    else
    {
         bill=100+0.8*50+0.60*100+0.40*(call-200);
  
    }
    printf("%f",bill);
}
