/*
program: Compare two strings to strcmp function .
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
int main()
{
    char str1 [] = "Hello0";
    char str2 [] = "HelloA";
    int cmp;
    cmp = strcmp(str1, str2);
    printf("%d",cmp);
}