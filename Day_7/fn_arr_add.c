#include <stdio.h>
void array_add(int arr1[], int arr2[],int result[]);
int main()
{
    int arr1[5] = {2,4,6, 8, 10};
    int arr2[5] = {1, 3,5, 7,9};
    int result[5];
    array_add(arr1, arr2, result);
    printf("Resultant array: ");
    for (int i =0;i < 5;i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
void array_add(int arr1[], int arr2[],int result[])
{
    for (int i =0; i<5; i++)
    {
        result[i] = arr1[i]+arr2[i];
    }
}
