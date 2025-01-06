#include <stdio.h>

int main(void)
{
    float height;
    printf("请输入身高");
    scanf("%f", &height);
    printf("身高为:%fCM", height / 2.54);
    return 0;
}