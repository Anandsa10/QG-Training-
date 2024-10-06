#include <stdio.h>

int main()
{
    char s;
    printf("Enter color\n");
    scanf(" %c", &s);

    if (s == 'R' || s == 'r')
    {
        printf("Don't Go\n");
    }
    else if (s == 'G' || s == 'g')
    {
        printf("Go...\n");
    }
    else if (s == 'Y' || s == 'y')
    {
        printf("Please wait\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
