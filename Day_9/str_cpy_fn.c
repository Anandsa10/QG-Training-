/*
program: Copy string 2 to string 1 without using strcpy function.
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/

#include <stdio.h>
#include <string.h>

void copy(char *str1, char *str2,int n);
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

    copy(str1,str2,n);

    
}
void copy(char *str1, char *str2, int n)
{
  int length, ind = 0;
  char *ptr;
  length=strlen(str1);
  while(n>0)
  {
    str2[ind] = *ptr;
    ind++;
    ptr--;
    n--;
  }
  printf("Resulting String 1: %s\n", str2);

}