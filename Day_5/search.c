/*

Program : Search an element in an array and return index and address
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
*/




#include <stdio.h>

int main() 
{
    int ind,elem;
    int flag = 0;
    int arr[10];
    for (ind = 0; ind < 10; ind++) 
    {
        printf("Enter values %d: ", ind + 1);
        scanf("%d", &arr[ind]); 
    }
    printf("Enter the elements to be searched\n");
    scanf("%d",&elem);
    for(ind = 0; ind < 10; ind++)
    {
        if(arr[ind] == elem)
        {
            printf("Element %d is at index %d and adress is %X",elem,ind,&arr[ind]);
            flag =1;
            break;
        }
        
    }
    if(!flag)
        {
            printf("Element not found\n");
        }

    
}


//HEX to DEC
/*
hex = 0X138 = 1 * 16^2 + 3 * 16^1 + 8 * 16^0 = 312
*/


/*
DEC to HEX

dec = 100 : 100/16 

*/