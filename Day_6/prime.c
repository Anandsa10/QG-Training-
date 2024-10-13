// #include <stdio.h>
// #include <stdbool.h>
// int main() 
// {
//     int res[20];
//     int ind, count = 0, num1 = 2;
//     float ratio;
//     while (count < 10) 
//     {
//         bool tru_num = true;
//         for (ind = 2; ind * ind <= num1; ind++)
//         {
//             if (num1 % ind == 0)
//             {
//                 tru_num = false;
//                 break;
//             }
//         }
//         if (tru_num)
//         {
//             res[count] = num1;
//             count++;
//         }
//         num1++;
//     }
//     printf("Numbers are :");
//     for (ind = 0; ind < 10; ind++)
//     {
//         printf("%d ",res[ind]);
//     }
//     printf("\n");
//     for (ind = 0; ind < 9; ind++)
//     { 
//         ratio = (float)res[ind + 1] / res[ind];
//         printf("Ratio of %d and %d: %.2f\n", res[ind + 1], res[ind], ratio);
//     }
//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int res[20];
    int ind, count = 0, num1 = 2;
    float ratio;
    while (count < 10) 
    {
        bool tru_num = true;
        for (ind = 2; ind * ind <= num1; ind++)
        {
            if (num1 % ind == 0)
            {
                tru_num = false;
                break;
            }
        }
        if (tru_num)
        {
           *(res + count) = num1;
            count++;
        }
        num1++;
    }
    printf("Numbers are :");
    for (ind = 0; ind < 10; ind++)
    {
        printf("%d ",*(res+ ind));
    }
    printf("\n");
    for (ind = 0; ind < 9; ind++)
    { 
        ratio = (float) res[ind + 1] / res[ind];
        printf("Ratio of %d and %d: %.2f\n", res[ind + 1], res[ind], ratio);
    }
    return 0;
}
