/*

Program : Display Hexal number using ASCII 
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to display hexal number system using corresponding ascii value.
*/


#include <stdio.h>

int main()
{
    char arr[16];
    int ind;
    for (ind = 0; ind < 16; ind++)
    {
        if (ind < 10)
        {
            arr[ind] = 0x30 + ind;
        }
        else
        {
            arr[ind] = 0x41 + (ind - 10);
        }
        printf("%c \t", arr[ind]);
    }
    return 0;
}