#include <stdio.h> 
int main() 
{ 
    int a; 

    for (int i = 0; i < 2 * 4 - 1; i++) { 
  

      
        if (i < 4) { 
            a = 2 * i + 1; 
        } 
        else { 
            a = 2 * (2 * 4 - i) - 3; 
        } 
  
        for (int j = 0; j < a; j++) { 
            printf(" "); 
        }   
            

        for (int k = 0; k < 2 * 4 - a; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
}