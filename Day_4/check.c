
/*

Program : Number checker
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : Print cube of entered num, if it is positive again prompt from user, if same number entered exit.
*/


#include <stdio.h>

int main()
{
    int num, cube, prev = 0;
    while (1)
    {
        printf("Enter a number\n");
        scanf("%d", &num);
        if (num == prev)
        {
            printf("Already entered number\n");
            break;
        }
        if (num > 0)
        {
            cube = num * num * num;
            printf("Cube of number: %d\n", cube);
        }
        else
        {
            printf("Number is not positive.\n");
        }
        prev = num;
    }
    return 0;
}
