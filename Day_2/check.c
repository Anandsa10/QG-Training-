#include <stdio.h>
int main()
{
    int val;
    printf("Enter an integer in range -10 to 10\n");
    scanf("%d",&val);
    if(!(val>-10 && val <10))
    {
        printf("Number is not in mentioned range");
    }
    else
    {
        printf("Number is  in mentioned range");
    }
}