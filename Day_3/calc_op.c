#include <stdio.h>
int main()
{
    int i, n, m, x, y;
    printf("--------------OPERATOR-----------\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter your choice\n");
        printf("1.Arithametic\n");
        printf("2.Logical\n");
        printf("3.Bitwise\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Arithametic\n");
            printf("1.Addition\n");
            printf("2.Substraction\n");
            printf("3.Multiplication\n");
            printf("4.Division\n");
            scanf("%d", &m);

            printf("Enter numbers\n");
            scanf("%d %d", &x, &y);
            switch (m)
            {
            case 1:
                printf("Sum is %d\n", x + y);

                break;
            case 2:
                printf("Difference is %d\n", x - y);

                break;
            case 3:
                printf("Product  is %d\n", x * y);

                break;
            case 4:
                printf("Division is %d\n", x / y);

                break;

            default:
                printf("Invalid");
                break;
            }

            break;
        case 2:
            printf("Logical\n");
            printf("1. AND\n");
            printf("2. OR\n");
            printf("Choose an option: ");
            scanf("%d", &m);

            printf("Enter numbers\n");
            scanf("%d %d", &x, &y);

            switch (m)
            {
            case 1:
                printf("AND operation %d\n", x && y);
                break;
            case 2:
                printf("OR operation %d\n", x || y);
                break;

            default:
                printf("Invalid");
                break;
            }
            break;
        case 3:
            printf("\nBitwise Operations Menu:\n");
            printf("1. AND\n");
            printf("2. OR\n");
            printf("3. XOR\n");
            printf("Choose an option: ");
            scanf("%d", &m);

            printf("Enter numbers\n");
            scanf("%d %d", &x, &y);

            switch (m)
            {
            case 1:
                printf("AND operation %d\n", x & y);
                break;
            case 2:
                printf("OR operation %d\n", x | y);
                break;
            case 3:
                printf("XOR operation %d\n", x ^ y);

            default:
                printf("Invalid\n");
                break;
            }

        default:
            printf("Invalid\n");
            break;
        }
    }
}
