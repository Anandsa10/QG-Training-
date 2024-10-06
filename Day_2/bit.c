#include<stdio.h>
int main()
{
    int v1 =10, v2 =100;
    v1 = v1 <<1;
    v2 = v2 >>2;
    v2 = v2 <<1;
    printf("left shifted: %d\n",v1);
    printf("right shifted: %d\n",v2);
}