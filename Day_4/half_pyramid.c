// #include <stdio.h>
// int main()
// {
//     int rows,count =0;
//     int str;
//     printf("Enter number of rows\n");
//     scanf("%d", &rows);

//     while(count < rows)
//     {
//       str =0;
//       while(str <= rows)
//       {
//         printf("* ");
//         str++;
//       }
//       printf("\n");
//       count++;
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i = 1;
    int j,rows;

    scanf("%d",rows);

    while (i <= rows)
    {
        j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
