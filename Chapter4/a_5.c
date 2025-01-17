#include <stdio.h>

int main(void)
{
    float file_size = 2.2;
    float speed = 18.12;
    float time = file_size / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.", speed, file_size, time);
    return 0;
}