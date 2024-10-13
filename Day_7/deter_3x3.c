#include <stdio.h>
#include "lib.c"

int main() {
    int ind, jnd, row, col, det = 0;
    int mat[3][3], temp[2][2];
    printf("Enter elements of the 3x3 matrix:\n");
    for (ind = 0; ind < 3; ind++) {
        for (jnd = 0; jnd < 3; jnd++) {
            printf("Element [%d][%d]: ", ind, jnd);
            scanf("%d", &mat[ind][jnd]);
        }
    }
    for (ind = 0; ind < 3; ind++) {

        int temp_row = 0;
        for (row = 0; row < 3; row++) {

            if (row == 0) {
                continue; 
            }
            int temp_col = 0;
            for (col = 0;col <3;col++) {

                if (col != ind) {
                    temp[temp_row][temp_col] = mat[row][col];
                    temp_col++;
                }
            }
            temp_row++; 
        }
        int sub_det = 0; 
        mat_det(temp, sub_det); 
        if (ind % 2 == 0) {
            det += mat[0][ind] * sub_det;
        } else {
            det -= mat[0][ind] * sub_det; 
        }
    }
    printf("The determinant of the matrix is: %d\n", det);
    return 0;
}
