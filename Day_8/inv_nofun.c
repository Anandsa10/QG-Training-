#include <stdio.h>
#include "de_lib.c"
int main()
{
    int mat[3][3], temp[2][2],cofactor[3][3],transpose[3][3];
    int ind, jnd,row,col, det = 0, temp_row = 0, temp_col = 0,og_det =0;
    float inverse[3][3];
    printf("Enter elements\n");
    for (ind = 0;ind<3;ind++)
    {
        for (jnd = 0;jnd<3;jnd++)
        {
            printf("Element [%d][%d]: ", ind,jnd);
            scanf("%d", &mat[ind][jnd]);
        }
    }
    for(ind =0;ind<3;ind++)
    {
        for (jnd =0;jnd<3;jnd++)
        {
            temp_row = 0,temp_col =0;
            for(row = 0;row<3;row++)
            {
                for(col =0;col<3;col++)
                {
                    if(row != ind && col != jnd)
                    {
                        temp[temp_row][temp_col] = mat[row][col];
                        temp_col++;
                    }
                }
                if (temp_col == 2)
                {
                    temp_col = 0;
                    temp_row++;
                }
            }
            det = 0;
            det = mat_det(temp, det);
            if ((ind+jnd)%2 ==0)
            {
                cofactor[ind][jnd] =  mat[ind][jnd]*det;
            }
            else
            {
                cofactor[ind][jnd] =  mat[ind][jnd]*(-det);
            }

             if(ind ==0) //determinant of og matrix
            {
                if (jnd%2 == 0)
                {
                    og_det += mat[0][jnd] * det;
                }
                else
                {
                    og_det -= mat[0][jnd] * det;
                }
            }
        }
    }
    if(og_det ==0)
    {
        printf("Determinant is zero.\n");
        return 0;
    }
    printf("cofactor matrix\n");
    for (ind =0;ind<3;ind++)
    {
        for (jnd =0;jnd<3;jnd++)
        {
            printf("%d ", cofactor[ind][jnd]);
        }
        printf("\n");
    }
    //transpose
    for (ind =0;ind<3;ind++)
    {
        for (jnd =0;jnd<3;jnd++)
        {
            transpose[jnd][ind] = cofactor[ind][jnd];
        }
    }
    printf("\nTranspose matrix\n");
    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            printf("%d ", transpose[ind][jnd]);
        }
        printf("\n");
    }
    //inverse
    printf("\nInverse of the matrix:\n");
    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            inverse[ind][jnd] = (float)transpose[ind][jnd] / og_det;
            printf("%.2f ", inverse[ind][jnd]);
        }
        printf("\n");
    }
}