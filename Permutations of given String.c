#include <stdio.h>
#include <string.h>
/*Permutations of given String
Given a string S, the task is to write a program to print
all permutations of a given string.
A permutation also called an “arrangement number”
or “order,” is a rearrangement of the elements of an
ordered list S into a one-to-one correspondence with S
itself. A string of length N has N! permutations.
Examples:Input: S = “ABC”
Output: “ABC”, “ACB”, “BAC”, “BCA”, “CBA”, “CAB”
Input: S = “XY”
Output: “XY”, “YX”*/
void swap(char *a, char *b)
 {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int left, int right)

 {
 	int i;
    if (left == right) 
	{
        printf("%s\n", str);  
    }
	 else 
	 {
        for (i = left; i <= right; i++) 
		{
            swap((str + left), (str + i));  
            permute(str, left + 1, right);  
            swap((str + left), (str + i)); 
        }
    }
}

int main()
 {
    char str[100];

    
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    
    
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}

