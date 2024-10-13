#include <stdio.h>
int main()
{
    int var =10, *var_ptr ,**ptp ;
    var_ptr = &var;
    ptp = &var_ptr;

    **ptp  <<=1;
    printf("Value mul by 2(left shift) %d\n",**ptp);
    **ptp >>=1;
    printf("Value div by 2(right shift) %d\n",**ptp);

}