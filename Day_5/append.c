
/*

Program : Append two array
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to append array2 in array1 with remaining space.
*/

#include <stdio.h>

int main()
{
    int ind, n,m, newElement, largest, index = 0;
    int arr1[25];
    int arr2[5];
    printf("Enter size of 1st array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (ind = 0; ind < n; ind++)
    {
        scanf("%d", &arr1[ind]);
    }
    printf("Enter size of 2st array: ");
    scanf("%d", &m);
    printf("Enter the elements:\n");
    for (ind = 0; ind < m; ind++)
    {
        scanf("%d", &arr2[ind]);
    }
    if (n + m <= 25)
    {
        
        for (ind = 0; ind < m; ind++)
        {
            arr1[n + ind] = arr2[ind];
        } 
        n = n+ m;
    }
    else
    {
        printf("not possible\n");
    }
        for (ind = 0; ind < n; ind++)
    {
        printf("%d ", arr1[ind]);
    }
    printf("\n");
}


