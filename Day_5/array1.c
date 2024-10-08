/*

Program : Display array
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
*/



#include <stdio.h>
int main()
{
    int i;
    int arr[8];
    printf("Enter elements\n");
    for(i =0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf(" entered values:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    
    
}

