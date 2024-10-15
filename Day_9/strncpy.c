/*
program: Copy string 1 to string 2 with required character using strncpy function .
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
    strncpy(str2, str1, 2);
    printf("Copied string: %s\n", str2);
    return 0;
}