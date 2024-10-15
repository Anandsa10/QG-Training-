/*

Assesment 1
Author : Anand Sajeev A
Date : [14/10/2024]
Revision : Nil
*/

// #include <stdio.h>

// int assessment();
// int main()
// {

//     assessment();
//     assessment();
//     assessment();
// }
// int assessment()
// {
//     static int count =0;
//     count++;
//     printf("Count after %d called\n",count);
// }



#include <stdio.h>

int array(int arr[]);
int main()
{
    int arr[5] = {1,2,3,4,5};
    array( arr);
}

int array(int arr[])
{
    int ind;
    for(ind =0;ind<5;ind++)
    {
        printf("%d",arr[ind]);
    }
}
