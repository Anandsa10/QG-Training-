/*

Program : Pattern printing 'A'
Author : Anand Sajeev A
Date : [06/10/2024]
Revision : Nil
Objective : To print * pattern on shape of "A"
*/



#include <stdio.h>

int main()
{
    int a; 
    scanf("%d",&a);              
    int b = (a * 2) - 1; //calculates width of the pattern on each row.

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            
            if (j == a - i - 1 || j == a + i - 1 || (i == a / 2 && j > a - i - 1 && j < a + i - 1)) // j == a - i - 1: checks for the left diagonal of the pattern.
                                                                                                   // j == a + i - 1: checks for the right diagonal. 
                {                                                                                 // i == a / 2 && j > a - i - 1 && j < a + i - 1 checks for the middle row.
                    printf("*");
                }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


