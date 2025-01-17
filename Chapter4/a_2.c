#include <stdio.h>
int main(void)
{
    char name_a[50];
    char name_b[50];
    scanf("%s%s", &name_a, &name_b);
    printf("%s , %s\n", name_a, name_b);
    printf("\"%20s,%s\"\n\"%s,%-20s\"\n\"%s,%3s\"", name_a, name_b, name_a, name_b, name_a, name_b);
    return 0;
}