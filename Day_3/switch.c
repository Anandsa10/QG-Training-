#include <stdio.h>

int main()
{
    int n, a, b, c;
    printf("Enter values for performing logical operation(0/1)\n");
    scanf("%d %d", &a, &b);

    printf("Enter an option");
    printf("1.AND\n");
    printf("2.OR\n");
    printf("3.XOR\n");

    scanf("%d", &n);
    int and = a && b;
    int or = a || b;
    int xor = (a || b) && !(a && b);
    switch (n)
    {
    case 1:
        printf("Result of AND: %d\n", and);
        break;
    case 2:
        printf("Result of OR: %d\n", or);
        break;
    case 3:
        printf("Result of AND: %d\n", xor);

    default:
        break;
    }
}