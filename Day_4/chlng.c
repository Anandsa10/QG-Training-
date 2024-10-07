#include <stdio.h>
int main() {
    int number; 
    int inverted = 0; 
    int place = 1; 
    int temp; 
    printf("Enter a decimal number: ");
    scanf("%d", &number); 
    temp = number;
    while (number > 0) {
        int digit = number % 10; 
        if (digit == 0) {
            inverted += 1 * place; 
        } else if (digit == 1) {
            inverted += 0 * place; 
        } else {
            inverted += digit * place; 
        }
        number /= 10; 
        place *= 10; 
    }
    printf("Inverted number: ");
    for (int i = 1; i <= temp; i *= 10) {
        if (i > inverted) {
            printf("0"); 
        }
    }
    printf("%d\n", inverted);
    return 0;
}