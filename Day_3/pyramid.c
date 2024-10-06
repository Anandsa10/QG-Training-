
#include <stdio.h>

int main()
{

    int a, b;

    for (a = 0; a < 10; a++)
    {

        for (b = 10 - a - 1; b > 0; b--)
        {
            printf(" ");
        }

        for (b = 0; b <= a; b++)
        {
            printf("%d ", b);
        }

        printf("\n");
    }

    return 0;
}
