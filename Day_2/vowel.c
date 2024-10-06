/*

Program : Vowel Checker
Author : Anand Sajeev A
Date : [03/10/2024]
Revision : Nil
Objective : To find a character is vowel or not
*/




#include <stdio.h>
int main()
{
    char s;
    printf("Enter an alphabet\n");
    scanf("%c", &s);
    if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122))
    {
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
        {
            printf("Entered char is a vowel\n");
        }
        else
        {
            printf("Entered char is consonant\n");
        }
    }
    else
    {
        printf("Entered char is not an alphabet\n");
    }
}