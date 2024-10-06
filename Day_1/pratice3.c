#include<stdio.h>
int v1 = 5; //global
void test(); //prototype


void main ()
{
    int v2 =20; //local
    printf("value is %d\n", v2);
    printf("Adress is %d\n", &v2);
    test();
    test();
    test();
}
void test()
{
    static int v1= 0;

    printf("The value is %d\n", ++v1);
    printf("Adress is %d\n", &v1);
    
}