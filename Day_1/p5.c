// #include <stdio.h>

// int main() {
//     int condition, v1 = 10, v2 = 20, v3 = 5, res;

//     // Ask the user to input the condition value (0 or 1)
//     printf("Enter condition (0 or 1): ");
//     scanf("%d", &condition);

//     // If condition is 0, evaluate v1 + (v2 - v3)
//     // If condition is 1, evaluate v1 + v2 - v3
//     if (condition == 0) {
//         res = v1 + (v2 - v3);
//     } else if (condition == 1) {
//         res = v1 + v2 - v3;
//     } else {
//         printf("Invalid condition. Please enter 0 or 1.\n");
//         return 1; // Exit with error code
//     }

//     printf("Result is: %d\n", res);
//     return 0;
// }









































#include <stdio.h>
int main()
{
    // int v1 =10;
    // // int v2,v3;
    // // v2 = v1--;
    // // v3 = --v1;
    // // printf(" value of V3 %d,V1 %d,V2 %d\n", v3,v1,v2);
    // printf("%d\n%d\n%d\n ",--v1,++v1,v1--);


    // int v1= 10, v2= 20 , v3 =50;
    // int res1, res2;
    // res1 = v1 + (v2-v3);
    // res2 = v1 + v2- v3 ;
    // printf("%d\n,%d\n", res1, res2);





    int v1 =10, v2= 12;
    v1 = v1 ^ v2; //200
    v2 = v1 ^ v2; //10
    v1 = v1 ^ v2; //20
    printf("v1=%d,v2=%d",v1,v2);
}