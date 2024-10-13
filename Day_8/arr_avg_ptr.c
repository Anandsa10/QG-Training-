
#include <stdio.h>
int main()
{
    int arr1[3][3];
    int ind, jnd;
    float avg[3];
    int sum[3] = {0, 0, 0}; 
    printf("Enter elements:\n");
    for (ind=0;ind<3;ind++)
    {
        for(jnd=0;jnd<3;jnd++)
         {
 
            scanf("%d",(*(arr1 + ind) + jnd));
        }
    }
    printf("Input Matrix:\n");
    for(ind = 0;ind<3;ind++)
     {
        for(jnd =0;jnd<3;jnd++)
         {
  
            printf("%d ", arr1[ind][jnd]);
        }
        printf("\n"); 
    }
    printf("\n");

    for(jnd =0;jnd<3;jnd++) 
    { 
        for(ind=0;ind<3;ind++) 
        { 
            sum[jnd] += *(*(arr1 + ind) + jnd); 
        }
        avg[jnd] =(float)sum[jnd]/3; 
    }

    printf("Average \n");
    for(jnd =0;jnd<3; jnd++) 
    {
        printf(" %.2f\n", avg[jnd]);
    }

    return 0;
}
