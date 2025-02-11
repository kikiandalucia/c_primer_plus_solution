#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            printf("%c %d\n",ch, tolower(ch) - 96);
        }
        else
        {
            return -1;
        }
    }
    return 0;
}