#include <stdio.h>

int main(void)
{
    float a;
    scanf("%f", &a);
    printf("%.2e\n", a);
    printf("%a", a);
    return 0;
}