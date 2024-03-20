#include <stdio.h>

void main() 
{
    char alphabet = 'a';  
    int step;  

    do {

     printf("%c ",alphabet);
     step = 4;
     alphabet += step;

   }

    while (alphabet <= 'z');  
    printf("\n");  
}