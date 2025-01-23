#include <stdio.h>
#define time 60

int main(void)
{
    int i = 1;
    while(i > 0)
    {
        printf("输入分钟数：");
        scanf("%d", &i);
        printf("%d秒, %.2f小时",i * time, (float)i / time);
    }
    return 0;
}