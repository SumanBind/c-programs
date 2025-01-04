#include<stdio.h>
int swaps(int a,int b)
{
int t=a;
a=b;
b=t;
	return 0;
}
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("%d%d",a,b);
	swaps(a,b);
	printf("%d%d",a,b);
	return 0;
}
