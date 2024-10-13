#include <stdio.h>
void mat_sum(int *mat1, int *mat2,int *res, int n1, int m1);
int main()
{
    int mat1[25][25], mat2[25][25], res[25][25];
    int lp1, lp2, n1, n2, m1, m2;

    printf("Enter size of Matrix 1 (row n column)\n");
    scanf("%d %d", &n1, &m1);
    printf("Enter elements of the first matrix:\n");
    for (lp1 = 0; lp1 < n1; lp1++)
    {
        for (lp2 = 0; lp2 < m1; lp2++)
        {
            printf("Element [%d][%d]: ", lp1, lp2);
            scanf("%d", &mat1[lp1][lp2]);
        }
    }
    printf("Enter size of Matrix 2 (row n column)\n");
    scanf("%d %d", &n2, &m2);
    printf("Enter elements of the second matrix:\n");
    for (lp1 = 0; lp1 < n2; lp1++)
    {
        for (lp2 = 0; lp2 < m2; lp2++)
        {
            printf("Element [%d][%d]: ", lp1, lp2);
            scanf("%d", &mat2[lp1][lp2]);
        }
    }
    if (n1 == n2 && m1 == m2)
    {
        printf("Matrix dimensions do not match! Cannot add matrices.\n");
    }

    mat_sum(mat1, mat2,res, n1, m1);
    printf("Sum of the matrices:\n");
    for (lp1 = 0; lp1 < n1; lp1++) {
        for (lp2 = 0; lp2 < m1; lp2++) {
            printf("%d ", res[lp1][lp2]);
        }
        printf("\n");
    }
}

void mat_sum(int *mat1, int *mat2,int *res, int n1, int m1)
{
    int lp1, lp2;

    for (lp1 = 0; lp1 < n1; lp1++)
    {
        for (lp2 = 0; lp2 < m1; lp2++)
        {
            res[lp1][lp2] = mat1[lp1][lp2] + mat[lp1][lp2];
        }
    }
}