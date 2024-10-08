/*

Program : Rotate an Array
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to rotate an array by user prompting the number of rotation then ask is wanted to continue or not.
*/



#include <stdio.h>
int main()
{
    int ind, n, rot;
    char ch = 'Y';
    int arr1[25];
    printf("Enter the size of the 1st array: ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }
    while (ch == 'Y' || ch == 'y')
    {
        printf("Enter number of rotations: ");
        scanf("%d", &rot);
        while (rot > 0)
        {
            int end = arr1[n - 1];
            for (ind = n - 1; ind > 0; ind--)
            {
                arr1[ind] = arr1[ind - 1];
            }
            arr1[0] = end;
            rot--;
        }
        printf("After rotation:\n");
        for (ind = 0; ind < n; ind++)
        {
            printf("%d ", arr1[ind]);
        }
        printf("\n");
        printf("Do you want to continue (Y or y)? ");
        scanf(" %c", &ch);
    }
    return 0;
}
