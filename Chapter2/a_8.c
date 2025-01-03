#include <stdio.h>

void one_three();
void two();

int main(void)
{
    one_three();
    return 0;
}
void one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}
void two()
{
    printf("two\n");
}