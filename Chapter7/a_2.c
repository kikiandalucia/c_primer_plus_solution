#include <stdio.h>

int main(void)
{
    printf("请输入字母");
    char ch = getchar();
    int i = 1;
    while (ch != '#')
    {
        printf("%c,%d ||", ch, ch);
        if (i % 8 == 0)
        {
            printf("\n");
        }
        i++;
        ch = getchar();
    }
    return 0;
}