#include <stdio.h>
int main()
{
    int v1= 0xA; //1010
    int a,b,c,d;
    a = (v1>>1) &1;
    b = (v1>>2) &1;
    c = (v1>>3) &1;
    d = (v1>>4 ) &1;
    printf("%d %d %d %d", a,b,c,d);


}