#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()

{

    double a, b, h, d, y;

    printf("Enter a=");
    scanf("%lf", &a);

    printf("Enter b=");
    scanf("%lf", &b);

    printf("Enter h=");
    scanf("%lf", &h);

    printf("Enter d=");
    scanf("%lf", &d);

    int prec = 0;
    while (d < 1)
    {
        d *= 10;
        ++prec;
    }

    for (; a < b + 0.00001; a += h)

    {
        y = 0;
        int n = 1;
        while (n < 10000)
        {
            n++;
            y += (n * pow(a, 2)) * (sin(n * a));

        };

        y += a;

        printf("\n x=%lf y=%.*lf", a, prec, y);

    }

}
