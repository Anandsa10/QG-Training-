/*

Program : Largest element in an array 
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to find largest element in an array also print index and address.
*/


#include <stdio.h>

int main()
{
    int ind, n, newElement, largest, index = 0;
    int arr[25];
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (ind = 0; ind < n; ind++)
    {
        scanf("%d", &arr[ind]);
    }
    largest = arr[0];
    for (ind = 1; ind < n; ind++)
    {
        if (arr[ind] > largest)
        {
            largest = arr[ind];
            index = ind;
        }
    }
    printf("The largest element is: %d , index is %d its address is: %p\n", largest,index, &arr[index]);
    return 0;
}
