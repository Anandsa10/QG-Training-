#include <stdio.h>
int main()
{
    int arr1[3][3],count[1][2]={0};
    int ind, jnd,cur,cur_occ=0,knd,lnd;
    printf("Enter elements:\n");
    for (ind=0;ind<3;ind++)
    {
        for(jnd=0;jnd<3;jnd++)
        {
 
            scanf("%d",(*(arr1 + ind)+jnd));
        }
    }
    printf("Matrix\n");
    for(ind =0;ind<3;ind++)
    {
        for(jnd =0;jnd<3;jnd++)
        {
            printf("%d ", arr1[ind][jnd]);
        }
        printf("\n");
    }
    printf("\n");
    for(ind=0;ind<3;ind++)
    {
        for(jnd=0;jnd<3;jnd++)
        {
            cur = *(*(arr1 + ind)+jnd);
            cur_occ = 0;
            for (knd = 0;knd<3;knd++) 
            {
                for(lnd =0; lnd<3;lnd++)
                {
                    if (*(*(arr1 + knd) + lnd) ==cur) 
                    {
                        cur_occ++;
                    }
                }
            }
            if(cur_occ > count[0][1]) 
            {
                count[0][0] =cur;
                count[0][1] =cur_occ; 
            }
        }
    
         
    }
    if(cur_occ == 1)
    {
        printf("every elements are unique\n");
    }
    else
    {
        printf("maximum occurrence: %d\n", count[0][0]);
        printf("number of occurrence: %d\n", count[0][1]);
    }
}