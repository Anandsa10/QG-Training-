#include <stdio.h>

int main() {
    int val1, val2;
    int *val1_ptr = &val1; 
    int *val2_ptr = &val2; 
    printf("Enter two values: ");
    scanf("%d %d", val1_ptr, val2_ptr); 
    int temp = *val1_ptr;
    *val1_ptr = *val2_ptr;
    *val2_ptr = temp;
    printf("After swapping %d %d\n", *val1_ptr, *val2_ptr);

}
