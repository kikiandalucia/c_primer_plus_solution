#include <stdio.h>

int main(void)
{
    char tmp = 'A';
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", tmp + j);
        }
        tmp += i + 1;
        printf("\n");
    }
    return 0;
}