#include <stdio.h>

int main(void)
{
    float num;
    printf("请输入杯数");
    scanf("%f", &num);
    printf("%f品脱\n%f盎司\n%f大汤勺\n%f茶勺\n", num / 2, num / 8, (num / 8) / 2,((num / 8) / 2)/ 3 );
    return 0;
}