#include <stdio.h>
/*Write a program in C to print arithmetic progression and its
sum.
Input: First term: 2, Common difference: 4
Number of terms: 10
Output:
Enter the first term of the A.P.: 2
Enter the common difference: 4
Input number of terms in the series: 10
Arithmetic Progression : 2 6 10 14 18 22 26 30 34 38
The sum of the AP series is: 200*/
int main() 
{
    int f, c, n,sum=0,i,term;
    
    printf("Enter the first term of the A.P.: ");
    scanf("%d", &f);
    
    printf("Enter the common difference: ");
    scanf("%d", &c);
    
    printf("Enter number of terms in the series: ");
    scanf("%d", &n);
    
    printf("Arithmetic Progression: ");
    
    for (i = 0; i < n; i++) 
	{
         term = f + i * c;
        printf("%d ", term);
        sum =sum+term;
    }
    
    printf("\nThe sum of the AP series is: %d\n", sum);
    
    return 0;
}

