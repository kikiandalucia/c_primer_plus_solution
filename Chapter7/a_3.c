#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, o = 0, a = 0, a_1 = 0;
    scanf("%d", &i);
    while(i != 0)
    {
        if(i % 2 == 0)
        {
            o++;
            a += i;
        }
        else
        {
            j++;
            a_1 += i;
        }
        a += i;
        scanf("%d", &i);
    }
    printf("偶数平均数:%d,奇数个数:%d,奇数平均数:%d", a / o, j, j / a_1);
    return 0;
}