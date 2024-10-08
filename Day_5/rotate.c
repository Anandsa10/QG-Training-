/*

Program : Rotate an array (one right shift).
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
*/




#include <stdio.h>
int main()
{
    int ind, n,end;
    int arr1[25];
    printf("Enter the size of the 1st array: ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }
    if (n > 0)
    {
        end = arr1[n - 1];
        for (ind = n - 1; ind > 0; ind--)
        {
            arr1[ind] = arr1[ind - 1];
        }
        arr1[0] = end; 
    }
    printf("after rotaion\n");
    for (ind = 0; ind < n; ind++)
    {
        printf("%d ", arr1[ind]);
    }
    return 0;
}