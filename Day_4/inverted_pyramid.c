#include <stdio.h>

int main() {
    int size, row, col, space;
    char letter;

    
    printf("Enter the size of the inverted isosceles triangle: ");
    scanf("%d", &size);

    
    for(row = size; row >= 1; row--) {
        
        for(space = 1; space <= size - row; space++) {
            printf(" ");
        }

        
        letter = 'A';

        
        for(col = 1; col <= row; col++) {
            if(col == 1 || col == row || row == size) {
                
                printf("%c ", letter);
            } else {
                
                printf("  ");
            }
            letter++; 
        }

        printf("\n");
    }

    return 0;
}