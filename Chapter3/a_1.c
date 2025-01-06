#include <stdio.h>
int main(void)
{
    // 上溢情况
    float toobig = 100.0f * 3.0e10;
    printf("%f\n", toobig + 1);

    float toosmall = 12345.6f / 3.0e10;
    printf("%f", toosmall);
    return 0;
}