#include <stdio.h>

int main() {
    int n;
    int num;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (int l = 0; l < n; l++) {
        num = 1; 
        printf("%*s", (n - l) * 2, ""); 

        for (int i = 0; i <= l; i++) {
            
            if (num > 9) {
                printf("%4X", num); 
            } else {
                printf("%4d", num); 
            }
            num = num * (l - i) / (i + 1); 
        }
        printf("\n");
    }

    return 0;
}
