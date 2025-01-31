#include <stdio.h>
#define SIZE 8
int main()
{
    double num1[SIZE], num2[SIZE];
    int index1, index2, index;

    printf("Enter 8 numbers to the first array:\n");
    for (index1 = 0; index1 < SIZE; index1++)
        scanf("%lf", &num1[index1]);							
    num2[0] = num1[0];
    for (index1 = 1, index2 = 1; index1 < SIZE; index1++, index2++)
        num2[index2] = num2[index2-1] + num1[index1];
    printf("The first array:  ");
    for (index=0; index < SIZE; index++) {
        printf("%6.2f", num1[index]);
    }														
    printf("\nThe second array: ");
    for (index=0; index < SIZE; index++) {
        printf("%6.2f", num2[index]);				
    }
    printf("\n");

    return 0;
}