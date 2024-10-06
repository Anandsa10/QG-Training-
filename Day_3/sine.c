#include <stdio.h>
#include <math.h>

int main()
{
    float p = 3.14;

    for (int angle = 0; angle <= 360; angle += 15)
    {

        double radians = angle * (p / 180.0);

        double sineValue = sin(radians);

        printf("Sine(%d°) = %.4f\n", angle, sineValue);
    }

    return 0;
}