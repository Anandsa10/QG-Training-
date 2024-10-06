// #include <stdio.h>

// int main() {
//     char v1, v2;
//     printf("Enter two characters:\n");
//     scanf(" %c %c", &v1, &v2); 

    
//     if (v1 ^ v2) {
//         printf("Not valid\n");
//     } else {
//         printf("Valid\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    char c1, c2;

    
    printf("Enter first character: ");
    scanf(" %c", &c1); 
    printf("Enter second character: ");
    scanf(" %c", &c2);

    
    if ((c1 ^ c2) == 0) {
        printf("FALSE,The characters are the same.\n");
    } else {
        printf("TRUE, The characters are different.\n");
    }

    return 0;
}

