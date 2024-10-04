


#include <stdio.h>

int main()
{
    int M ;
    printf("Enter the marks");
    scanf("%d",&M);
    switch(M/10)
    {
        case 9 :printf("A grade");
        break;
        
         case 8 :printf("B grade");
        break;
        
         case 7 :printf("C grade");
        break;
        
         case 6 :printf("D grade");
        break;
        
        default:printf("F");
    }
    return 0;
}