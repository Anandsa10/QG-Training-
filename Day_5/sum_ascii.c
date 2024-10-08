/*

Program : Sum of elements in an array
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
*/


#include <stdio.h>

int main() 
{
    int ind;
    int sum = 0;
    char arr[5];
    for (ind = 0; ind < 5; ind++) {
        printf("Enter character %d: ", ind + 1);
        scanf(" %c", &arr[ind]); 
    }
    for (ind = 0; ind < 5; ind++) {
        sum += (int)arr[ind]; 
    }
    printf("The sum is: %d\n", sum);
    printf("Size is:%d", sizeof(arr));

    return 0;
}
