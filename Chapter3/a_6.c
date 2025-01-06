#include <stdio.h>

int main(void)
{
    int tmp;
    printf("请输入水夸脱数：");
    scanf("%d", &tmp);
    printf("水分子数为:%.0lf", tmp * 3.0e10 * 950);
    return 0;
}