#include <stdio.h>
#define SIZE 8
int main(void)
{
    int index, count, num[SIZE];
     
    for (index = 0, count = 1; index < SIZE; index++)
    {
        count *= 2;
        num[index] = count;
    }									
    
    index=0;									
    do
    printf("%d ", num[index++]);
    while (index < SIZE);						
    printf("\n");

    return 0;
}