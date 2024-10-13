#include <stdio.h>
int main()
{
    int i, n, p, x,*var_ptr ,**ptp ;
    var_ptr = &x;
    ptp = &var_ptr;
    printf("Enter operaton\n");
    printf("Right Shift :1\n");
    printf("Left Shift :2\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Right shift\n");
        printf("Enter a number\n");
        scanf("%d", &x);
        printf("How many times you have to right shift\n");
        scanf("%d", &p);
        for (i = 0; i < p; i++)
        {
            **ptp  >>= 1;
            printf("After shift %d: %d\n", i + 1, **ptp );
        }

        break;

    case 2:
        printf("Left shift\n");
        printf("Enter a number\n");
        scanf("%d", &x);
        printf("How many times you have to left shift\n");
        scanf("%d", &p);

        for (i = 0; i < p; i++)
        {
            **ptp  <<= 1; 
            printf("After shift %d: %d\n", i + 1, **ptp );
        }
        break;

    default:

           printf("invalid\n");
        break;
    }
}