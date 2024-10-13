#include <stdio.h>
int main()
{
    int mat[3][3];
    int ind, jnd, n;
    printf("Enter central element\n");
    scanf("%d", &n);
    mat[2][2] = n;
    if (n == 0)
    {
        printf("Matrix cannot be generated\n");
        return 0;
    }
    for (ind = 0; ind < 3; ind++) {
        for (jnd = 0; jnd < 3; jnd++) {
            if (ind == 1 && jnd == 1) { 
                mat[ind][jnd] = n;
            } else if (ind == jnd) { 
                mat[ind][jnd] = n * n;nt
            } else { 
                mat[ind][jnd] = n * n * n; 
            }
        }

    }
    
    printf("Matrix\n");
    for (ind = 0; ind < 3; ind++)
    {
        for (jnd = 0; jnd < 3; jnd++)
        {
            printf("%d ", mat[ind][jnd]);
        }
        printf("\n");
    }
    printf("\n");
}
