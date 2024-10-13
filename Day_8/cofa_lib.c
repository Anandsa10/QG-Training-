void calculateCofactor(int mat[3][3], int cofactor[3][3])
{
    int temp[2][2];
    int ind, jnd, row, col, temp_row, temp_col, det;

    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            temp_row = 0, temp_col = 0;
            for (row = 0; row < 3; row++)
            {
                for (col = 0; col < 3; col++)
                {
                    if (row != ind && col != jnd)
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
            if ((ind + jnd) % 2 == 0)
            {
                cofactor[ind][jnd] = det; 
            }
            else
            {
                cofactor[ind][jnd] = -det; 
            }
        }
    }
}