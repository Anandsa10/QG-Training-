#include <stdio.h>
int main()
{
    int var =10, *var_ptr;
    char ch = 'a', *ch_ptr;
    var_ptr = &var;
    ch_ptr = &ch;
    // printf(" Adreess of char variable %X and int variable %X\n",ch_ptr, var_ptr);
    // printf("value of variable %d\n",*var_ptr);
    // printf("address of pointer %X\n",&var_ptr);
    // printf("Size of pointer %d\n",sizeof(var_ptr));

    printf("value of character %d %c\n",*ch_ptr, *ch_ptr);
    printf("address of pointer %X\n",&ch_ptr);
    printf("Size of pointer %d\n",sizeof(ch_ptr));
    printf("Address of character %X\n",&ch);
    printf("Address of character %X\n",ch_ptr);


}