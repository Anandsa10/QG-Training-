#include <stdio.h>
int main()
{
    int ind, n;
    int sum =0;
    int arr1[25];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++)
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }

    for(ind=0;ind<n;ind++)
    {
        sum += *(arr1 + ind);
    }
    printf("Sum is %d\n",sum);
}