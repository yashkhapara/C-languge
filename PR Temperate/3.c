// Write a Program to find the sum of the first and the last digit of a number.

#include <stdio.h>
void main()
{
    int n, sum=0, f, l;

    printf("Enter any number = ");
    scanf("%d", &n);
    
    l = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    f = n;
    sum = f + l;
    printf("Sum of first and last digit = %d", sum);

}