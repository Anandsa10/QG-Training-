/*
Program : Perform Bubble sort in an array.
Author : Anand Sajeev A
Date : 09/10/24
Revision : Nil
*/




#include <stdio.h>
int main()
{
    int ind, n, loop_1, loop_2, temp;
    int arr1[25];
    printf("Enter the size of the array ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }
    for (loop_1 = 0; loop_1 < n - 1; loop_1++)
    {
        for (loop_2 = 0; loop_2 < n - loop_1 - 1; loop_2++)
        {
            if (arr1[loop_2] > arr1[loop_2 + 1])
            {

                temp = arr1[loop_2];
                arr1[loop_2] = arr1[loop_2 + 1];
                arr1[loop_2 + 1] = temp;
            }
        }
    }
    printf("sorted array:\n");
    for (ind = 0; ind < n; ind++)
    {
        printf("%d ", arr1[ind]);
    }
    return 0;
}