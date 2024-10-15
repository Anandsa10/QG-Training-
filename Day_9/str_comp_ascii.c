/*
program: Compare 2 string return the ascii value in which difference of char occur
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/

#include <stdio.h>
int res;
void checkStrings(char str1[], char str2[]);
int main() 
{

    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    checkStrings(str1, str2);
}
void checkStrings(char str1[], char str2[]) 
{
    int i =0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i]) 
        {
            
            res = str1[i] - str2[i];
            printf("Difference in %c and %c is %d\n",str1[i],str2[i],res);
        }
        i++;
    }

}