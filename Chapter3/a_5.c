#include <stdio.h>

int main(void)
{
    double count = 3.156e10;
    int a;
    printf("年龄：");
    scanf("%d", &a);
    printf("年龄对于秒数为：%.0f", count * a);
    return 0;
}