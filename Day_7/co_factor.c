#include <stdio.h>
#include "lib.c"
int main()
{
    int mat[3][3], temp[2][2],cofactor[3][3];
    int ind, jnd,row,col, det = 0, temp_row = 0, temp_col = 0,multiplication_result=0;
    printf("Enter elements\n");
    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            printf("Element [%d][%d]: ", ind, jnd);
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
                for(col =0;col< 3;col++)
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
        }
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
}