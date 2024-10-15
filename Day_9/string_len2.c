/*
program: Find length of string without strlen function.
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
int main()
{
    int ind =0,len =0;
    char str [100];  //= "Embedded C";
    printf("input string\n");
    scanf("%s",&str);
    while(*(str+ind) != '\0')
    {
        len++;
        ind++;
    }
    printf("Length is %d",len);
}