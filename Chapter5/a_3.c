#include <stdio.h>
int main(void)
{
    int days = 1;
    while (days > 0)
    {   
        printf("请输入天数");
        scanf("%d", &days);
        printf("%d days are %d weeks, %d days\n", days, days / 7, days % 7);
    }   
    return 0;

}