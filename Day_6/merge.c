#include <stdio.h>

int main()
{
    int arr1[5] = {2, 9, 1, 3, 7};
    int ar1[3], ar2[2],ar3[1], ar4[1], ar5[1], ar6[1], ar7[1];

    for (int ind = 0; ind < 3; ind++)
    {
        ar1[ind] = arr1[ind];
    }
    for (int ind = 0; ind < 2; ind++)
    {
        ar2[ind] = arr1[ind + 3];
    }
    for (int ind = 0; ind < 1; ind++)
    {
        ar3[ind] = ar1[ind];
    }
    for (int ind = 0; ind < 1; ind++)
    {
        ar4[ind] = ar1[ind + 1];
    }
    for (int ind = 0; ind < 1; ind++)
    {
        ar5[ind] = ar1[ind + 2];
    }
    for (int ind = 0; ind < 1; ind++)
    {
        ar6[ind] = ar2[ind];
    }
    for (int ind = 0; ind < 1; ind++)
    {
        ar7[ind] = ar2[ind + 1];
    }
    return 0;
}