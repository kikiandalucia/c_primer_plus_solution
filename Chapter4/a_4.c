#include <stdio.h>

int main(void)
{
    char name[50];
    float height;
    printf("输入您的身高和姓名\n");
    scanf("%s %f",name, &height);
    printf("%s,you are %.3f feet tall",name, height);
    return 0;
}