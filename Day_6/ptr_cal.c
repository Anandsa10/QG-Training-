#include <stdio.h>

int main()
{
    int i, n, m, x, y;
    int *x_ptr = &x;
    int *y_ptr = &y;

    printf("--------------OPERATOR-----------\n");

    printf("Arithmetic\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &m);
    printf("Enter two numbers:\n");
    scanf("%d %d", x_ptr, y_ptr);
    switch (m)
    {
    case 1:
        printf("Sum is %d\n", *x_ptr + *y_ptr);
        printf("Adress of x %X",&x);
        printf("Adress of x %X",x_ptr);
        break;
    case 2:
        printf("Difference is %d\n", *x_ptr - *y_ptr);
        break;
    case 3:
        printf("Product is %d\n", *x_ptr * *y_ptr);
        break;
    case 4:
        if (*y_ptr != 0)
        {
            printf("Division is %d\n", *x_ptr / *y_ptr);
        }
        else
        {
            printf("Not possible\n");
        }
        break;
    default:
        printf("Invalid operation\n");
        break;
    }
    return 0;


}
