#include <stdio.h>
int main()
 {
    int var = 10;
    int *var_pt;
    int **ptpr;
    var_pt = &var;
    ptpr = &var_pt;
    printf("Value of variable(ptp): %d\n", **ptpr);
    printf("Value of variable(ptr): %d\n", *var_pt);
    printf("Address of variable: %X\n", var_pt);
    printf("Address of variable(&var): %X\n", &var);
    printf("Address of 1st pointer var_pt: %X\n", &var_pt);
    printf("Address of point to pointer ptpr: %X\n", &ptpr);
    printf("content of ptpr %X\n",ptpr);
    printf("content of var_pt %X\n",var_pt);
    printf("Size of pointer to pointer: %d bytes\n", sizeof(ptpr));
}