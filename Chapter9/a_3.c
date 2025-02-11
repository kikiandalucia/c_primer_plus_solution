#include <stdio.h>

void chline(int i, int j, char c)
{
    for(int a = 0; a < i; a++)
    {
        for(int b = 0; b < j; b++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main(void)
{
    int i, j;
    char c;
    scanf("%d %d %c", &i, &j, &c);
    chline(i, j, c);
    return 0;
}