/*

Program : Reverse an array.
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
*/




#include <stdio.h>
int main()
{
    int ind;
    char arr[10];
    char rev[10];
    printf("Input characters\n");
    for(ind =0;ind<10;ind++)
    {
        scanf(" %c",&arr[ind]);
    }
    for(ind = 0; ind < 10; ind++)
     {
        rev[ind] = arr[9 - ind];
    }
    printf("Reversed array is:\n");
    for(ind = 0; ind < 10; ind++)
     {
        printf("%c ", rev[ind]);
    }

}