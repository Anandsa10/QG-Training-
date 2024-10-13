/*
Program : Perform Selection sort on an array in Descending order.
Author : Anand Sajeev A
Date : 09/10/24
Revision : Nil
*/

#include <stdio.h>
int main()
{
    int ind, n, loop_1, loop_2, temp, big;
    int arr1[25];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }
    for (loop_1 = 0; loop_1 < n - 1; loop_1++)
    {
        big = loop_1;
        for (loop_2 = loop_1 + 1; loop_2 < n; loop_2++)
        {
            if (arr1[loop_2] > arr1[big])
            {
                big = loop_2;
            }
        }
        if (big != loop_1)
        {
            temp = arr1[loop_1];
            arr1[loop_1] = arr1[big];
            arr1[big] = temp;
        }
        printf("Array after pass %d: ", loop_1 + 1);
        for (ind = 0; ind < n; ind++)
        {
            printf("%d ", arr1[ind]);
        }
        printf("\n");
    }
    printf("Selection sorted array:\n");
    for (ind = 0; ind < n; ind++)
    {
        printf("%d ", arr1[ind]);
    }
    return 0;
}
