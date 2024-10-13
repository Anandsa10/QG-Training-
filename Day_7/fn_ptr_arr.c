#include <stdio.h>
void array_diff(int *arr1, int *arr2);
int main()
{
    int arr1[5] = {5, 6, 7, 8, 9};
    int arr2[5] = {1, 2, 3, 4, 5};
    array_diff(arr1, arr2);
    printf("difference is: ");
    for(int i =0; i<5;i++){
        printf("%d ", arr1[i]);
    }
    return 0;
}
void array_diff(int *arr1, int *arr2)
{
    for(int ind =0; ind<5; ind++) 
    {
        *(arr1 + ind) = *(arr1 + ind) - *(arr2 + ind);
    }
}
