/*

Program : Random number guess
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : program to generate random number and guess it.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, rndm;
    int chance = 0;
    rndm = rand() % 26;

    printf("Enter value\n");
    while (chance < 5)
    {
        while (1)
        {

            scanf("%d", &num);
            chance++;
            if (num == rndm)
            {
                printf("Correct number\n");
                break;
            }

            else if (num < rndm)
            {
                printf("Incorrect number, number is less than og\n");
            }

            else 
            {
                printf("Incorrect number, number is greater  than og\n");
            }

            if(chance == 5)
            {
                printf("Chances are over\n");
                break;
            }

        }
        
       
    }
}