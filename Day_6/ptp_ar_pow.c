#include <stdio.h>
#include <math.h>

int main() 
{
    int ind, n, elem, m;
    double res;
    int arr1[25];
    printf("Enter the size of the array (up to 25): ");
    scanf("%d", &n);
    for (ind = 0; ind < n; ind++) 
    {
        printf("Enter value %d: ", ind + 1);
        scanf("%d", &arr1[ind]);
    }
    printf("Enter index of element ");
    scanf("%d", &elem);
    printf("Enter the power ");
    scanf("%d", &m);
    res = pow(*(arr1 + elem), m); 
    printf("The value at index %d is %d, and %d^%d = %.2f\n", elem, *(arr1 + elem), *(arr1 + elem), m, res);
    return 0;
}

