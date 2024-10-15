/*
Program : Factorial using recursion.
Date : [15-10-24]
Revision : Added test cases.
Author : Anand Sajeev A
*/



#include <stdio.h>
int result = 1;
void fact(int num);
int main()
{
    int num;
    printf("enter number\n");
    scanf("%d", &num);
    if(num<0) 
    {
        printf("negative number\n");
    }
    else
    {
        fact(num);  
        printf("factorial is %d\n", result);
    }
    return 0;
}
void fact(int num)  
{
    if(num ==0||num ==1)
    {
        return;
    }
    result *= num;
    fact(num - 1); 
}