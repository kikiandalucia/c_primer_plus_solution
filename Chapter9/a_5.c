#include <stdio.h>

void larger_of(double *, double *);
int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    larger_of(&a, &b);
    printf("%.f %.f", a, b);
    return 0;
}
void larger_of(double *a, double*b)
{
    if (a < b)
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }
}