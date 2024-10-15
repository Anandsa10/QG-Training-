/*
program: Compare two string without using string function.
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/

#include <stdio.h>

int main() 
{
    char str1[20], str2[20];
    int i = 0;
    int result = 0;

    printf("Enter first string: ");
    scanf("%s", str1);  
    printf("Enter second string: ");
    scanf("%s", str2);
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if(str1[i] !=str2[i]) 
        {
            result = str1[i]-str2[i];
            break;
        }
        i++;
    }
    if(result ==0) 
    {
        result = str1[i]-str2[i];
    }
    if(result ==0) 
    {
        printf("Strings are equal.\n");
    } else if (result < 0) 
    {
        printf("First string is smaller.\n");
    } else 
    {
        printf("First string is greater.\n");
    }
    return 0;
}
