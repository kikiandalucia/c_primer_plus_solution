#include <stdio.h>
// 练习switch
int main(void)
{
    printf("请输入字符");
    int k = 0, h = 0, e = 0;
    char ch = getchar();
    while(ch != '#')
    {
        switch (ch)
        {
            case ' ':
            k++;
            ch = getchar();
            continue;
            case '\n':
            h++;
            ch = getchar();
            continue;
            default:
            e++;
            ch = getchar();
        }
    }
    printf("空格数量:%d 换行符数量:%d 字母数量:%d", k, h, e);
    return 0;
}