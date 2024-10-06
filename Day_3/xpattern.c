#include <stdio.h>

int main()
{
    int a; 
    scanf("%d",&a);              
    int b = (a * 2) - 1; 

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            
            if (j == a - i - 1 || j == a + i - 1 || (i == a / 2 && j > a - i - 1 && j < a + i - 1)) 
                {
                    printf("*");
                }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


