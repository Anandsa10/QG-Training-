
/*

Program : Even number
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : To print even numbers in an range of numbers
*/

#include <stdio.h>

int main()
{
    int n = 0;

    while (n < 10)
    {
        int val = 20;

        while (val <= 50)
        {
            if (val % 2 == 0)
            {
                printf("%d ", val);
            }
            val++;
        }

        n++;
        printf("\n");
    }

    return 0;
}
