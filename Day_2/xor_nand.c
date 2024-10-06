#include <stdio.h>
int main()
{
    int v1 = 0x4, v2 = 0x6;
    int p1, p2, p3, op;
    p1 = ~(v1 & v2);
    p2 = ~(p1 & v1);
    p3 = ~(p1 & v2);
    op = ~(p2 & p3);
    printf("%x",op);

}