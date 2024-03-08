#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
        printf("This is positive number\n",a);
    else if (a < 0)
        printf("This is negative number\n",a);
    else
        printf("This  is neutral number.\n",a);

    return 0;
}