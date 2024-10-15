/*
program: Concatinate string 2 to string 1 with inputed number of character and store in reverse order
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/

#include <stdio.h>

void strConcat( char str1[], char str2[]);
int main()
{
    char str1[20];
    char str2[10];
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);
    strConcat(str1,str2);
    
}
void strConcat(char str1[],char str2[])
{
    int ind=0,jnd=0;
    while(str1[ind] != '\0')
    {
        ind++;
    }
    while(str2[jnd] != '\0')
    {
        str1[ind] = str2[jnd];
        ind++;
        jnd++;
    }
    str1[ind] = '\0';
    printf("Concatenated tring %s",str1);
}
