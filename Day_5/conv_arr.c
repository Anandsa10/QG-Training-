/*

Program : Decimal to Hexal conversion
Author : Anand Sajeev A
Date : [08/10/2024]
Revision : Nil
*/


#include <stdio.h>
int main() {
    int dec[10]; 
    char hex[10];  
    int ind,n, j, temp; 
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter numbers:\n" );
    for (ind = 0; ind < n; ind++) {
        scanf("%d", &dec[ind]);
    }
    for (ind = 0; ind < n; ind++) {
        int decimal = dec[ind];
        int index = 0; 
        if (decimal == 0) {
            printf("Hexa value is: 0\n", decimal);
            continue; 
        }
        while (decimal != 0) {
            temp = decimal % 16;
            if (temp < 10)
                hex[index++] = temp + 48; 
            else
                hex[index++] = temp + 55; 

            decimal = decimal / 16; 
        }
        printf("Hexa value is: ", dec[ind]);
        for (j = index - 1; j >= 0; j--) 
            printf("%c", hex[j]);
        printf("\n");
    }
    return 0;
}