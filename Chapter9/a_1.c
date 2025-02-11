#include <stdio.h>

double min(double x, double y) 
{
    return (x > y) ? y : x;
}
int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%f", min(x, y));
    return 0;
}