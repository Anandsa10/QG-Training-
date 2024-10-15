/*
program: Concatinate two strings with required character using strncat function .
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/


#include <string.h>
#include <stdio.h>
int main()
{
    int n;
    char str1[25] = "I'm Happy ";
    char str2[20] = "Because of you";
    printf("Enter number of char to be copied\n");
    scanf("%d",&n);
    printf("%s ", strncat(str1,str2,n));
}