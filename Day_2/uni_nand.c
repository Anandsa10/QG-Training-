#include <stdio.h>
int main()
{
    int v1 = 0x55, v2 = 0xAA; // v1 0101 v2 1010
    int a, b,c ;
    // OR
    a = v1 & v1;
    a = ~a;
    b = v2 & v2;
    b = ~b;
    c = ~(a &b);
    printf("%x",c);
}