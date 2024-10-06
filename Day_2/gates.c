#include <stdio.h>

int main()
{

    int v1 =0x3,v2 =0x6; // 0011 0110
    int and,or,xor;
    and= v1 & v2; //0010 
    or= v1 | v2;  //0111
    xor= v1 ^ v2; //101
    printf("AND %x OR %x XOR %x ",and, or, xor);

}