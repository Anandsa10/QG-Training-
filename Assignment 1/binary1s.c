/*

Program : Quadratic Equation Solver
Author : Anand Sajeev A
Date : [02/10/2024]
Revision : Nil
Objective : To find number of 1's in a binary equivalent of a decimal number
*/

#include <stdio.h>
int main()
{
    int i, a, temp = 0, count = 0;
    int arr[32];
    printf("Enter a decimal value\n");
    scanf("%d", &a);

    // Convert decimal to binary by reminder method and store it in array.
    while (a > 0)
    {
        arr[temp] = a % 2; // store reminder
        a = a / 2;
        temp++;
    }

    // Print the Binary representation
    printf("Binary is\n");
    for (i = temp - 1; i >= 0; i--)
    {
        printf(" %d", arr[i]);
        if (arr[i] == 1)
        {
            count++;
        }
    }

    // Print number of 1's in the binary representation
    printf("\n");
    printf("Number of 1's = %d", count);
    return 0;
}
