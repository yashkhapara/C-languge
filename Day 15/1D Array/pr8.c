#include<stdio.h>
void main()
{
    int arr[3];
   
    for(int i=0;i<3;i++){
         printf("Enter the elements of array: \n");
	     scanf("%d",&arr[i]);
    }
    for(int i=3;i>=0;i--){
         printf("%d\n",arr[i]);
	     
    }

}