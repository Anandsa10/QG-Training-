#include <stdio.h>
int main()
{
    int arr1[3][3];
    int ind,jnd,min,temp,knd;
    printf("enter elements\n");
    for(ind = 0;ind<3;ind++)
    {
        for(jnd = 0;jnd<3;jnd++)
        {
            scanf("%d", (*(arr1+ind)+jnd));
        }
    }
    for(ind = 0;ind<3;ind++)
    {
        for(jnd =0;jnd<2;jnd++)
        {
            for(knd = 0;knd<2-jnd;knd++)
            {
                if(*(arr1[ind]+knd) > *(arr1[ind]+knd+1))
                {
                    temp = *(arr1[ind] + knd);
                    *(arr1[ind]+knd) = *(arr1[ind]+knd+1);
                    *(arr1[ind]+knd+1) = temp;
                }
            }
        }
    }
    printf("sorted matrix:\n");
    for (ind =0;ind<3;ind++)
    {
        for (jnd =0;jnd<3;jnd++)
        {
            printf("%d ",*(arr1[ind]+jnd)); 
        }
        printf("\n");
    }
    
}