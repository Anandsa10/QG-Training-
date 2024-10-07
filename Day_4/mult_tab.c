/*

Program : Multiplicaton Table
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : program to generate multiplicaton table of a number upto inputed iteration.
*/


#include <stdio.h>
int main()
{
    int num,iter,prod;
    int count =0;
    printf("Enter value \n");
    scanf("%d",&num);
    printf("Number of iteration\n");
    scanf("%d",&iter);
    printf("Multiplication Table of %d upto %d iteration\n",num,iter);
    
        while( count < iter)
        {
            count++;
            prod = num * count;
            printf("%d x %d = %d\n", num, count, prod);
           
        }
    
}