#include <stdio.h>

int main(void)
{
    char ch[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < 26; i++)
    {
        printf("%c\n", ch[i]);
    }
    return 0;
}