#include <stdio.h>
#include <string.h>
#define SIZE 255
int main(void)
{
    int index;
    char ch[SIZE];

    printf("Enter a line: ");
    for(index = 0, scanf("%c", &ch[0]); ch[index] != '\n';)
    {
        index++;
        scanf("%c", &ch[index]);
    }											
    for(index += 1; index < SIZE; index++)
        ch[index] = '\0';					
    for(index = strlen(ch); index >=0; index--)
        printf("%c", ch[index]);			
    printf("\n");

    return 0;
}