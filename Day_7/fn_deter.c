#include <stdio.h>
#include "lib.c"
int det;
// int mat_det(int mat[2][2],int det);

int main()
{
    int mat[2][2];
    int ind,jnd;
    printf("Enter elements of the 2x2 matrix:\n");
    for (ind =0; ind <2;ind++)
    {
        for (jnd = 0;jnd< 2;jnd++)
        {
            printf("Element [%d][%d]: ", ind, jnd);
            scanf("%d", &mat[ind][jnd]);
        }
    }
    det = mat_det(mat,det);
    printf("The determinant is: %d\n", det);
    return 0;
}

