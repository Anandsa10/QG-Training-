/*
program: Password Checker
Date : [15-10-24]
Revision : Added test case
Author : Anand Sajeev A
*/
#include <stdio.h>
#include <string.h>
void check(char *str1);
int main()
{
    char str1[25];
    printf("Enter password ");
    scanf("%s", str1);
    check(str1);
}

void check(char *str1)
{
 int ind, n,charflag =0,numflag=0,alphaFlag=0;
 n = strlen(str1);
 if(n<8)
 {
    printf("Password should be min 8 characters\n");
    return;
 }
 for(ind =0;ind<n;ind++)
 {
    if(*(str1 +ind) =='&' || *(str1 +ind) =='#' || *(str1 +ind) =='_')
    {
        charflag =1;
    }
    if (*(str1 + ind) >= '0' && *(str1 + ind) <= '9')
    {
        numflag =1;
    }
    if ((*(str1 + ind) >='A' && *(str1 + ind) <='Z') ||  (*(str1 + ind) >='a' && *(str1 + ind) <='z'))
    {
        alphaFlag = 1;
    }

 }
 if(numflag && charflag && alphaFlag)
 {
    printf("Password is valid\n");
 }
 else if(!charflag)
 {
    printf("Missing special char\n");
 }
 else if(!numflag)
 {
    printf("Missing numbers\n");
 }
 else
 {
    printf("Missing A-Z\n");
 }

}