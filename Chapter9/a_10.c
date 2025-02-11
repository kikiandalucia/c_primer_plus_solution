#include <stdio.h>

void tobinary(int i, int j);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    tobinary(a, b);
    return 0;
}

void tobinary(int i, int j)
{
    if (i == 0)
    {
        return;
    }
    else
    {
        tobinary(i / j, j);
        printf("%d", i % j); 
    }
}