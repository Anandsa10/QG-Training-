#include <stdio.h>

int main()
{
    int rows, i = 1, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    while (i <= rows)
    {
        j = 1;
        space = rows;
        while (space >i)
        {
            printf(" ");
            space--;
        }
        j = 1;
        while (j <= i)
        {
            
            if (j == 1 || j == i || i == rows)
            {
                printf(" *");
            }
            // else if (i == rows && j <= rows)
            // {
            //     while(rows>1)
            //     {
            //         printf(" *");
            //         rows--;

            //     }   
            // }
            else
            {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}


/*
OUTPUT:

Enter the number of rows: 5
     *   
    * *  
   *   * 
  *     *
 * * * * *

*/

