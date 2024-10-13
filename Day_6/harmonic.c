#include <stdio.h>
int main() 
{
    float arr[10]; 
    float a, d; 
    int ind;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter d: ");
    scanf("%f", &d);
    for (ind = 0; ind < 10; ind++) 
    {
        *(arr +ind) = 1.0f / (a + ind * d); 
    }
    printf(" Series:\n");
    for (ind = 0; ind < 10; ind++) 
    {
        printf("%.2f ", *(arr +ind)); 
    }
    printf("\n");
    return 0;
}