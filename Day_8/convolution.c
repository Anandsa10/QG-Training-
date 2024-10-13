#include <stdio.h>
int main()
{
    int arr1[10],arr2[10],conv[25];
    int n,m,ind,jnd;
    int *ptr1, *ptr2;
    ptr1 = &n;
    ptr2 =&m;
    printf("Enter size of linear array\n");
    scanf("%d",ptr1);
    printf("\nEnter size of impluse\n");
    scanf("%d",ptr2);
    // if(sizeof(arr1) != sizeof(arr2))
    // {
    //     printf("Different size of inputs\n");
    //     return 0;
    // }
    printf("Enter elements of linear array\n");
    for(ind=0;ind<*ptr1;ind++)
    {
        scanf("%d", (arr1 +ind));
    }
    printf("Enter elements of impluse\n");
    for(ind=0;ind<*ptr2;ind++)
    {
        scanf("%d", (arr2 +ind));
    }
    for(ind =0;ind<*ptr1+*ptr2-1;ind++)
    {
        *(conv +ind) = 0;
    }
    for(ind =0;ind<*ptr1;ind++)
    {
        for(jnd =0;jnd<*ptr2;jnd++)
        {
            *(conv+ind+jnd) += (*(arr1 + ind)) * (*(arr2 + jnd)); 
        }
    }
    printf("Convolution result:\n");
    for(ind =0;ind<*ptr1+*ptr2-1;ind++)
    {
        printf("%d ",*(conv + ind));
    }
    printf("\n");
}