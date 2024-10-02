
/*
Objective : To evaluate a quadratic equation and find roots.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, re, img; 
    printf("Enter the coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c); 

    // Determinant is calculated to find if roots are real or imaginary
    d = b * b - 4 * a * c; 
    if (d > 0) { //
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1: %.2f\n", r1); 
        printf("Root 2: %.2f\n", r2); 
    } else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are same: %.2f\n", r1); 
    } else {
        re = -b / (2 * a);
        img = sqrt(-d) / (2 * a);
        printf("Root 1: %.2f + i%.2f\n", re, img);
        printf("Root 2: %.2f - i%.2f\n", re, img); 
    }

    return 0;
}
