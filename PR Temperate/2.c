// Write a Program to count the total number of digits in a number.

#include <stdio.h>
void main()
{
    int num, count;

    printf("Enter any number = ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Total number of digits  = %d\n", count);

}