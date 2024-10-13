
#include <stdio.h>
#include "de_lib.c"
#include "cofa_lib.c"
#include "trans_lib.c"
int main()
{
    int mat[3][3], cofactor[3][3], transpose[3][3];
    int ind, jnd, og_det = 0;
    float inverse[3][3];
    printf("Enter elements\n");
    for(ind =0;ind<3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            printf("Element [%d][%d]: ", ind, jnd);
            scanf("%d", &mat[ind][jnd]);
        }
    }
    calculateCofactor(mat, cofactor);
    for (jnd = 0;jnd<3;jnd++)
    {
        if (jnd % 2 == 0)
        {
            og_det += mat[0][jnd]*cofactor[0][jnd];
        }
        else
        {
            og_det -= mat[0][jnd]*cofactor[0][jnd];
        }
    }
    if (og_det== 0)
    {
        printf("Determinant is zero. T\n");
        return 0;
    }

    printf("\nCofactor matrix:\n");
    for (ind =0;ind<3;ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            printf("%d ", cofactor[ind][jnd]);
        }
        printf("\n");
    }

    calculateTranspose(cofactor, transpose);

    printf("\nTranspose matrix :\n");
    for(ind =0;ind<3;ind++)
    {
        for(jnd =0;jnd<3;jnd++)
        {
            printf("%d ", transpose[ind][jnd]);
        }
        printf("\n");
    }
    printf("\nInverse :\n");
    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            inverse[ind][jnd] = (float)transpose[ind][jnd] / og_det;
            printf("%.2f ", inverse[ind][jnd]);
        }
        printf("\n");
    }
    return 0;
}
