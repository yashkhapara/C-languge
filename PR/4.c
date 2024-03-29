#include <stdio.h> 
void main() 
{ 
  

    for (int i = 0; i <= 2 * 4 - 1; i++) { 

        int a; 
        if (i < 4) { 
            a = 2 * (4 - i) - 1; 
        } 
        else { 
            a = 2 * (i - 4 + 1) + 1; 
        } 
  
  
        for (int j = 0; j <= a; j++) { 
            printf(" "); 
        } 
  
        for (int k = 0; k < 2 * 40 - a; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 

}