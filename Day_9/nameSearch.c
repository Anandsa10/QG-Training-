/*
program: Check names in an array using strcmp
Date : [15-10-24]
Revision : NIll
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>

void search(char (*str1)[10], char *str2);
int main()
{
    char str1[6][10] = { "Able", "Basil", "Celine", "David", "Elone", "Freddy"};
    char str2[10];
    printf("Enter name\n");
    scanf("%s", str2);

    search(str1,str2);


}

void search(char (*str1)[10], char *str2)
{
    int ind,flag=0,comp;
 
    for(ind =0;ind<6;ind++)
    {
        comp = strcmp(*(str1 +ind),str2);
        if (comp == 0)
        {
            flag = 1;
            break;
        }   
    }
    if(flag)
    {
        printf("Name is in list\n");
    }
    else
    {
        printf("Name not in list\n");
    }

}