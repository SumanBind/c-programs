#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of %d natural number=%d",n,sum);
	return 0;
}
