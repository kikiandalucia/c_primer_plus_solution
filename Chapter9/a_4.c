#include <stdio.h>

double f(double x, double y)
{
    return 1 /((1 / x + 1 / y) / 2);
}
int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%f",f(x, y));
    return 0;
}