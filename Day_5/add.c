/*

Program : Add new element in an array 
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to add Add new element in an index the right shift rest of elements.
*/




#include <stdio.h>

int main()
{
    int ind, n, index, new, flag = 0;
    int arr[25];
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (ind = 0; ind < n; ind++)
    {
        scanf("%d", &arr[ind]);
    }
    printf("Enter the index where element is to be added: ");
    scanf("%d", &index);
    printf("Enter the element to be added: ");
    scanf("%d", &new);

    for (ind = n; ind > index; ind--)
    {
        arr[ind] = arr[ind - 1];
    }
    arr[index] = new;
    n++;
    printf("Array after adding the element:\n");
    for (ind = 0; ind < n; ind++)
    {
        printf("%d ", arr[ind]);
    }
    printf("\n");

    return 0;
}
