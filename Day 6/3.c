#include <stdio.h>

int main() 
{

    int a, b, c;

    printf("First angle: ");
    scanf("%d", &a);

    printf("Second angle: ");
    scanf("%d", &b);

    c=180-a-b;

    printf("Third angle: %d degrees\n",c);
    
}