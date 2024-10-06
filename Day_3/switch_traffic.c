#include <stdio.h>

int main() {
    char s;
    printf("Enter color (R/G/Y):\n");
    scanf(" %c", &s); 

    switch (s) {
        case 'R' :
        case 'r':
            printf("Don't Go\n");
            break;
        case 'G':
        case 'g':
            printf("Go...\n");
            break;
        case 'Y':
        case 'y':
            printf("Please wait\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
