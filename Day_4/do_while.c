#include <stdio.h>
int main()
{
    int num1;
    char ch;
    do
    {
        printf("Enter a value\n");
        if (num1 > 0 && num1 < 10)
        {
            printf("value is %d\n", num1);
        }
        else if (num1 > 0 || num1 < 10)
        {
            printf("value is %d\n", num1);
        }
        else if (num1 != 10)
        {
            printf("Not equal\n");
        }
        printf("Do you want to continue (Y or y)?\n");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
}