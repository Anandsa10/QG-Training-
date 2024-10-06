#include <stdio.h>

int main() {
    int n = 10; 
    int a = 0, b = 1, next;
    
    printf("Fibonacci Series: \n");
    printf("%d \n", a); 

    
    if (n > 1) {
        printf("%d \n", b); 
    }

    for (int i = 2; i < n; i++) {
        next = a + b; 
        printf("%d ", next); 
        
        
        if (b != 0) {
            double ratio = (double)next / b; 
            printf("Ratio of %d to %d: %.3f\n", next, b, ratio);
        } else {
            printf("Ratio of %d to %d: Undefined (division by zero)\n", next, b);
        }

        
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
