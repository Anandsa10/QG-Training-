/*
program: Copy string 1 to string 2 using strcpy function .
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "I'm Here";
    char str2[20] = "I'm gone";

    char *ptr = str1;
    strcpy(ptr,str2);
    printf("%s ",ptr);
}