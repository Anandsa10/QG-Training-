/*

Program : Frequency counter
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
Objective : Program to find repeating element in an array and count frequency.
*/



#include <stdio.h>
int main()
{
    int ind1, ind2;
    char temp;
    int count = 0;
    char arr[10] = {'a', 'b', 'c', 'd', 'a', 'a', 'e', 'f', 'a', 'g'};
    int visited[10] = {0};
    for (ind1 = 0; ind1 < 10; ind1++)
    {
        if (visited[ind1] == 0)
            count = 1;
        for (ind2 = 0; ind2 < ind1; ind2++)
        {
            if (arr[ind1] == arr[ind2])
            {
                temp = arr[ind1];
                count++;
                visited[ind2] = 1;
            }
            if (count > 1)
            {
                printf("%c: %d\n", arr[ind1], count);
            }
        }
        printf("Character and Frequancy is %c %d", temp, count);
    }
}