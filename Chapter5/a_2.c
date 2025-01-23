#include <stdio.h>

int main(void)
{
    int i;
    printf("请输入一个整数\n");
    scanf("%d", &i);
    int i_p_10 = i + 10;
    while(i < i_p_10)
    {
        i++;
        printf("%d\n", i);
    }
    return 0;
}