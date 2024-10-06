#include <stdio.h>
int main()
{
   int v1 =0x3,v2 =0x6; // 0011 0110
   int nand,nor,xnor;
   nand = v1 & v2;
   nand = ~nand;
   nor = v1 | v2;
   nor = ~nor;
   xnor = v1 ^ v2;
   xnor = ~xnor;
   printf("NAND = %x NOR = %x XNOR =%x", nand,nor,xnor);

}