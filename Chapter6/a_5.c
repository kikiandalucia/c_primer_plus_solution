#include <stdio.h>

int main(void)
{
    char tmp1 = 'A';
    char tmp2;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", tmp1 + j);
        }
        tmp2 = tmp1 + i - 1;
        for(int j = 0; i > j; j++)
        {
            printf("%c", tmp2 - j);
        }
        printf("\n");
    }
    return 0;
}