/*
program: Copy string 2 to string 1 with inputed number of character and store in reverse order
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
void stringNcat(char *str1, char *st2, int n);
int main()
{

    int n;
    char str1[25];
    char str2[10];
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);
    printf("enter number of char to be copied\n");
    scanf("%d",&n);

    stringNcat(str1, str2, n);

    printf("Resulting String: %s\n", str1);
}
void stringNcat(char *str1, char *str2, int n)
{
    int ind =0 , jnd=0;
    int str2Len = strlen(str2);

    while(str1[ind] != '\0')
    {
        ind++;
    }

    int str2_len = 0;
    while (str2[str2_len] != '\0') {
        str2_len++;
    }
    if (n > str2_len)
    {
        n = str2_len;
    }
    for (int jnd = n - 1; jnd >= 0; jnd--)
    {
        str1[ind] = str2[jnd];
        ind++;
    }
    str1[ind] = '\0';

}