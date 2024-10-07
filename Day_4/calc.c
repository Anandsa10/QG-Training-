/*

Program : Calculator
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : Calculator to perform basic calculations.
*/




#include <stdio.h>

int main()
{
    char ch2;
    char ch1 = 'Y';
    int num1, num2;

    printf("---------CALCULATOR---------\n");

    while (ch1 == 'Y' || ch1 == 'y')
    {
        printf("Enter your choice (A: Addition, B: Subtraction, M: Multiplication, D: Division, O: Modulus)\n");
        scanf(" %c", &ch2);

        if (ch2 == 'A')
        {
            printf("Addition\n");
            printf("Enter two numbers:\n");
            scanf("%d %d", &num1, &num2);
            printf("Sum is: %d\n", num1 + num2);
        }
        else if (ch2 == 'B')
        {
            printf("Subtraction\n");
            printf("Enter two numbers:\n");
            scanf("%d %d", &num1, &num2);
            printf("Difference is: %d\n", num1 - num2);
        }
        else if (ch2 == 'M')
        {
            printf("Multiplication\n");
            printf("Enter two numbers:\n");
            scanf("%d %d", &num1, &num2);
            printf("Product is: %d\n", num1 * num2);
        }
        else if (ch2 == 'D')
        {
            printf("Division\n");
            printf("Enter two numbers:\n");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0)
            {
                printf("Quotient is: %d\n", num1 / num2);
            }
            else
            {
                printf("Division by zero is not possible.\n");
            }
        }
        else if (ch2 == 'O')
        {
            printf("Modulus\n");
            printf("Enter two numbers:\n");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0)
            {
                printf("Modulus is: %d\n", num1 % num2);
            }
            else
            {
                printf(" Modulus by zero is not allowed.\n");
            }
        }
        else
        {
            printf("Invalid operation.\n");
        }

        printf("Do you want to continue (Y or y)?\n");
        scanf(" %c", &ch1);
    }

    return 0;
}
