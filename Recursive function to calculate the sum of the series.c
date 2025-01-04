#include <stdio.h>
/*Given a positive integer N, the task is to find the sum of the
series 1 – (1/2) + (1/3) – (1/4) +…. (1/N) using recursion.
Examples:
Input: N = 3
Output: 0.8333333333333333
Explanation:
1 – (1/2) + (1/3) = 0.8333333333333333
Input: N = 4
Output: 0.5833333333333333
Explanation:
1- (1/2) + (1/3) – (1/4) = 0.5833333333333333*/

 double sum(int n)
 {
    
    if (n == 1) {
        return 1.0;
    }
    
    if (n % 2 == 0) 
	{ 
        return -1.0 / n + sum(n - 1);
    }
	 else
	 { 
        return 1.0 / n + sum(n - 1);
    }
}

int main()
 {
    int N;
    
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    //  recursive function
    double result = sum(N);


    printf("Sum of the series is: %.6f\n", result);

    return 0;
}

