#include <stdio.h>
int main()
{
    int mat1[25][25], mat2[25][25], res[25][25];
    int row1, col1, row2, col2, lp1, lp2, lp3;
    printf("Enter size of Matrix 1 (rows columns):\n");
    scanf("%d %d", &row1, &col1);
    printf("Enter elements of the first matrix:\n");
    for (lp1 =0; lp1 < row1;lp1++)
    {
        for (lp2 =0; lp2 < col1; lp2++)
        {
            printf("Element [%d][%d]: ", lp1,lp2);
            scanf("%d", &mat1[lp1][lp2]);
        }
    }
    printf("Enter size of Matrix 2 (rows columns):\n");
    scanf("%d %d", &row2, &col2);
    printf("Enter elements of the second matrix:\n");
    for (lp1 =0; lp1 < row2;lp1++)
    {
        for (lp2 = 0; lp2 < col2; lp2++)
        {
            printf("Element [%d][%d]: ", lp1, lp2);
            scanf("%d", &mat2[lp1][lp2]);
        }
    }
    printf("\nMatrix 1:\n");
    for (lp1 = 0; lp1 < row1; lp1++)
    {
        for (lp2 = 0; lp2 < col1; lp2++)
        {
            printf("%d ", mat1[lp1][lp2]);
        }
        printf("\n");
    }
    printf("\nMatrix 2:\n");
    for (lp1 = 0; lp1 < row2; lp1++)
    {
        for (lp2 = 0; lp2 < col2; lp2++)
        {
            printf("%d ",mat2[lp1][lp2]);
        }
        printf("\n");
    }
    if (col1 ==row2)
{
//for(lp1=0;lp1<row1;lp1++)
// {
        //     for (lp2= 0;lp2 <col2;lp2++)
        //     {
        //         res[lp1][lp2] = 0;
        //     }
        // }
        for (lp1 = 0;lp1 < row1;lp1++)
        {
            for (lp2=0; lp2<col2;lp2++)
            {
                for (lp3=0;lp3<col1;lp3++)
                {
                    res[lp1][lp2] += mat1[lp1][lp3] * mat2[lp3][lp2];
                }
            }
        }
        printf("\nResultant matrix is:\n");
        for (lp1 = 0; lp1 < row1; lp1++)
        {
            for (lp2=0;lp2<col2;lp2++)
            {
                printf("%d ",res[lp1][lp2]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix1 column and Matrix2 row are not the same\n");
    }
    return 0;
}
