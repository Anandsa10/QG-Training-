/*

Program : Digit Sum of Vowel
Author : Anand Sajeev A
Date : [03/10/2024]
Revision : Nil
Objective : To find digit sum of ASCII value of a vowel
*/



#include <stdio.h>
int main()
{
    char s;
    int sum;
    printf("Enter an alphabet\n");
    scanf("%c", &s);
    int ascii = (int)s;
    if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122))
    {
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
        {
            printf("Entered char is a vowel\n");
            sum = (ascii / 10) + (ascii % 10);
            printf("ASCII value is :%d\n", ascii);
            printf("sum of digit is  :%d\n", sum);
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