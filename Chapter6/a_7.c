#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[100];
    printf("请输入");
    scanf("%s", s);
    int j = strlen(s);
    for(int i = 0; i <= j; i++)
    {
        printf("%c", s[j - i]);
    }
}