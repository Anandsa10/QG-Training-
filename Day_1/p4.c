#include <stdio.h>

int main() {
    int intValue;
    // float floatValue;
    char charValue;
    
    // printf("Enter an integer: ");
    // scanf("%d", &intValue);
    
    // printf("Enter a float: ");
    // scanf("%f", &floatValue);
    
    printf("Enter a character: ");
    scanf(" %c", &charValue);
    intValue = charValue;

    printf("Integer: %d\n", intValue);
    // printf("Float: %.2f\n", floatValue);
    printf("Character: %c\n", charValue);
    printf("hexa: %X\n", intValue);

    return 0;
}
















































// #include <stdio.h>
// void main()
// {
//     int a;
//     float b;
//     char ch;

//   printf("Enter a int value\n");
//   scanf("%d", &a);
//   printf("Enter a float value\n");
//   scanf("%f",&b);
//   printf("Enter a char value\n");
//   scanf("%c",&ch);
//   printf("Value is %d\n", a);
//   printf("Value is %f\n", b);
//   printf("Value is %c\n", ch);
// }
