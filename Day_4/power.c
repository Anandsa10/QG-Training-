/*

Program : Power of a number
Author : Anand Sajeev A
Date : [07/10/2024]
Revision : Nil
Objective : program to find 10th power of a number and prompt user if want to continue.
*/


#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    long result;
    char ch ='Y';
    while(ch == 'Y' || ch == 'y')
    {
        printf("Enter a number\n");
        scanf("%d", &num);
        result = pow(num,10);
        printf("10th Power of %d is: %d\n",num,result);
        printf("Do you want to continue(Y or y)\n");
        scanf(" %c ",&ch);
        

    }
}