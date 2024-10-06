#include <stdio.h>
#include <math.h>
int main()
{
    int a = 1, sum=0;
    int i, n, r, curr;

    printf("Enter value of common ratio (r)\n");
    scanf("%d", &r);
    printf("How many terms \n");
    scanf("%d", &n);
    printf("SERIES\n");
    for (i = 0; i < n; i++)
    {
        curr = a * pow(r, i);
        printf("%d\n", curr);
        sum += curr;
    }
    printf("Sum of the series: %d\n", sum);
}