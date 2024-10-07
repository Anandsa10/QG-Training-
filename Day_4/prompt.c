/*

Program : Value prompt
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : program to prompt value from user till inputs 0.
*/



#include <stdio.h>

int main()
{
    int val;

    while (1)
    {
        printf("Enter value :\n");
        scanf("%d", &val);

        if (val == 0)
        {
            break;
        }

        printf("Entered value : %d\n", val);
    }
    printf("Exiting program.\n");
    return 0;
}
