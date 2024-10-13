void calculateTranspose(int matrix[3][3], int transpose[3][3])
{
    int ind, jnd;
    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            transpose[jnd][ind] = matrix[ind][jnd];
        }
    }
}