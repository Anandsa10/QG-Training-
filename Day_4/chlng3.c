#include <stdio.h>
#include <stdbool.h>

int main() {
    int levels;

    
    printf("Enter the number of levels for the prime pyramid: ");
    scanf("%d", &levels);

    int count = 0; 
    int num = 2;   

    
    for (int i = 1; i <= levels; i++) {
        
        for (int j = 0; j < levels - i; j++) {
            printf("  "); 
        }

        
        for (int j = 0; j < i; j++) {
           
            while (true) {
                bool is_prime = true; 

                
                for (int k = 2; k * k <= num; k++) {
                    if (num % k == 0) {
                        is_prime = false; 
                        break;
                    }
                }

                if (is_prime) {
                    printf("%d ", num); 
                    count++;
                    num++; 
                    break; 
                }
                num++; 
            }
        }

        printf("\n"); 
    }

    return 0;
}
