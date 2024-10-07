#include <stdio.h>

int main() {
    int n, next, first = 0, second = 1, sum = 0;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);


    if (n >= 1) {
        printf("Fibonacci Series: %d ", first);
        sum += first;
    }
    if (n >= 2) {
        printf("%d ", second);
        sum += second;
    }

    for (int loop_one = 2; loop_one < n; loop_one++) {
        next = first + second;
        printf("%d ", next);
        
   
        first = second;
        second = next;

        sum += next; 
    }

    printf("\nSum of the first %d Fibonacci numbers: %d\n", n, sum);

    return 0;
}