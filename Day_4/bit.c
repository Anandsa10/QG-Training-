/*

Program : Bitwise operator
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : Program to implement bitwise operator and masking first 16bit, printing format: Decimal,Hexal and Octal.
*/




#include <stdio.h>

int main()
{
    char ch1 = 'Y';
    char ch2;
    int num1, num2, result;
    printf("-----BITWISE OPERATION------\n");
    
    while (ch1 == 'Y' || ch1 == 'y')
    {
        printf("Enter an operator (&, |, ^)\n");
        scanf(" %c", &ch2);
        
        if (ch2 == '&')
        {
            printf("BITWISE AND\n");
            scanf("%d %d", &num1, &num2);
            result = num1 & num2;
            result = result & 0x0000FFFF;
            printf("BITWISE AND: %d (0x%X, %o)\n", result, result, result);
        }
        else if (ch2 == '|')
        {
            printf("BITWISE OR\n");
            scanf("%d %d", &num1, &num2);
            result = num1 | num2;
            result = result & 0x0000FFFF;
            printf("BITWISE AND: %d \n", result);
            printf("BITWISE AND:  (0x%X)\n", result);
            printf("BITWISE AND: ( %o)\n",  result);
        }
        else if (ch2 == '^')
        {
            printf("BITWISE XOR\n");
            scanf("%d %d", &num1, &num2);
            result = num1 ^ num2;
            result = result & 0x0000FFFF;
            printf("BITWISE XOR: %d \n", result);
            printf("BITWISE OR:  (0x%X)\n", result);
            printf("BITWISE XOR: ( %o)\n",  result);
        }
        else 
        {
            printf("Enter a valid operator\n");
        }
        
        printf("Do you want to continue (Y or y)?\n");
        scanf(" %c", &ch1);
    }
    
    return 0;
}
