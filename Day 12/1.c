#include <stdio.h>

int main() {

    int n, sum = 0;

    printf("Enter any number :  ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of all numbers = %d\n",sum);

}