#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
     printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() 
{
    int x , y;
    printf("Enter two number");
    scanf("%d%d",&x,&y);

    printf("Before swap : x = %d, y = %d\n", x, y);

    swap(x, y);

    return 0;
}
