#include <stdio.h>

int main(void)
{
    int i, j;
    printf("请输入数的上下限:");
    scanf("%d%d", &i, &j);
    while(i <= j)
    {
        printf("%d, %d, %d \n", i, i * i, i * i * i);
        i++;
    }
    return 0;
}