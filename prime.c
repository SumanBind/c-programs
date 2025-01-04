#include<stdio.h>
int fun(int n)
{
	int i,c;
	c=0;
static	int p[10];
	if(n==0)
	{
		return p[10];
	}
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
			
		}
	}
	if(c==2||c==1)
	{
		
		p[i]=n;
	//	printf("%d",n);
	}
	return fun(n-1);
}
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
 int x=fun(n);
printf("%d",x);
	return 0;
}
