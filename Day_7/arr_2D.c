#include <stdio.h>
int main()
{
    int disp[3][3];
    int lp1, lp2;
    for (lp1 = 0; lp1 < 3; lp1++)
    {
        for (lp2 = 0; lp2 < 3; lp2++)
        {
            printf("Enter value for disp[%d][%d]:", lp1, lp2);
            scanf("%d", &disp[lp1][lp2]);
        }
    }
    printf("Two Dimensional array elements:\n");
    for (lp1 = 0; lp1 < 3; lp1++)
    {
        for (lp2 = 0; lp2 < 3; lp2++)
        {
            printf("%d ", disp[lp1][lp2]);
            if (lp2 == 2)
            {
                printf("\n");
            }
        }
    }
}