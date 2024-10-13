
#include <stdio.h>
int main()
{
    int ind, n, loop_1, loop_2, curr;
    int arr1[25];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }
    for (loop_1 = 1; loop_1 < n; loop_1++)
    {
        curr = arr1[loop_1];
        for (loop_2 = loop_1; loop_2 > 0 && arr1[loop_2 - 1] > curr; loop_2--)
        {
            arr1[loop_2] = arr1[loop_2 - 1];
        }
        arr1[loop_2] = curr;
        printf("Array after pass %d: ", loop_1);
        for (ind = 0; ind < n; ind++)
        {
            printf("%d ", arr1[ind]);
        }
        printf("\n");
    }
    printf("Final sorted array: ");
    for (ind = 0; ind < n; ind++)
    {
        printf("%d ", arr1[ind]);
    }
    return 0;
}
