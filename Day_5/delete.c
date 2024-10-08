/*

Program : Delete an element in an array
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to delete an array and add 0 in the index then make it last element.
*/


#include <stdio.h>

int main()
{
    int ind, n, del, flag = 0;
    int arr[25];
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (ind = 0; ind < n; ind++)
    {
        scanf("%d", &arr[ind]);
    }
    printf("Enter the number to be searched and deleted: ");
    scanf("%d", &del);
    for (ind = 0; ind < n; ind++)
    {
        if (arr[ind] == del)
        {
            flag = 1;
            arr[ind] = 0;
            for (int j = ind; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = 0;
            break;
        }
    }
    if (flag)
    {
        printf("After deleting:\n");
        for (ind = 0; ind < n; ind++)
        {
            printf("%d ", arr[ind]);
        }
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
