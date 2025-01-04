#include <stdio.h>
/*Given two numbers A and B. Write a program to count the
number of bits needed to be flipped to convert A to B.
Examples:
Input: A = 10, B = 20, Output: 4
Explanation: Binary representation of A is 00001010
Binary representation of B is 00010100
We need to flip highlighted four bits in A to make it B.
Input: A = 7, B = 10, Output: 3
Explanation: Binary representation of A is 00000111
Binary representation of B is 00001010
We need to flip highlighted three bits in A to make it B.*/
int main()
 {
    int A, B, Result, count = 0;

    // Input values
    printf("Enter value of A: ");
    scanf("%d", &A);
    printf("Enter value of B: ");
    scanf("%d", &B);

    
    Result = A ^ B;

    
    while (Result) 
	{
        count= count+(Result & 1);  
        Result = Result>>1;         
    }

    // Output the result
    printf("Number of bits to flip to convert %d to %d: %d\n", A, B, count);

    return 0;
}

