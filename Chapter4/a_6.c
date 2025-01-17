#include <stdio.h>
#include <string.h>

int main(void)
{
    char name_a[50], name_b[50];
    scanf("%s %s", name_a, name_b);
    printf("%s %s\n%*d %*d\n",name_a, name_b, strlen(name_a), strlen(name_a), strlen(name_b), strlen(name_b));
    printf("%s %s\n%-*d %-*d\n",name_a, name_b, strlen(name_a), strlen(name_a), strlen(name_b), strlen(name_b));
    return 0;
}