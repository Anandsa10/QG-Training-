/*

Program : Swap arrays
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : To swap equal size arrays and print elements in reverse order. 
*/




#include <stdio.h>

int main()
{
    int ind, n, m;
    int arr1[25], arr2[25], rev1[25], rev2[25];

    printf("Enter the size of the 1st array (max 25): ");
    scanf("%d", &n);

    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }

    printf("Enter the size of the 2nd array (max 25): ");
    scanf("%d", &m);

    for (ind = 0; ind < m; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr2[ind]);
    }

    if (n != m)
    {
        printf("Sizes of the arrays are not the same. Cannot swap elements.\n");
        return 1;
    }

    for (ind = 0; ind < n; ind++)
    {
        if (arr1[ind] != 0 && arr2[ind] != 0)
        {
            arr1[ind] = arr1[ind] * arr2[ind];
            arr2[ind] = arr1[ind] / arr2[ind];
            arr1[ind] = arr1[ind] / arr2[ind];
        }
        else
        {

            printf("Swap skipped for index %d due to zero value.\n", ind);
        }
    }

    for (ind = 0; ind < n; ind++)
    {
        rev1[ind] = arr1[n - ind - 1];
    }
    printf("Reversed 1st array is:\n");
    for (ind = 0; ind < n; ind++)
    {
        printf("%d ", rev1[ind]);
    }
    printf("\n");

    for (ind = 0; ind < m; ind++)
    {
        rev2[ind] = arr2[m - ind - 1];
    }
    printf("Reversed 2nd array is:\n");
    for (ind = 0; ind < m; ind++)
    {
        printf("%d ", rev2[ind]);
    }
    printf("\n");

    return 0;
}
