#include <stdio.h>
int main()
{
    int arr1[3][3];
    int ind,jnd,large;
    printf("enter elements\n");
    for(ind = 0;ind<3;ind++)
    {
        for(jnd = 0;jnd<3;jnd++)
        {
            printf("Element [%d][%d]: ", ind,jnd);
            scanf("%d", &arr1[ind][jnd]);
        }
    }
    large = *(*(arr1 + 0) + 0);
    for(ind =0;ind<3;ind++)
    {
        for(jnd =0;jnd<3;jnd++)
        {
            if(*(*(arr1+ind) +jnd) >large)
            {
                large = *(*(arr1+ind) +jnd);
            }
        }
    }
    printf("The largest element: %d\n", large);
}