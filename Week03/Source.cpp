#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, x1, x2;
    printf("Enter the coefficeint number : ");
    printf("(ex. x^2 -2x + 1| Enter 1 -2 1)\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b * b < 4 * a * c)
        goto end;

    x1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);

    if (x1 == x2)
    {
        printf("Answer is %f", x1);
    }
    else
    {
        if (x1 < x2)
            printf("%f %f", x1, x2);
        else printf("%f %f", x2, x1);
    }
    return 0;
end:
    printf("Error, imaginary");
}