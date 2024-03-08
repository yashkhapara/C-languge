#include<stdio.h>
void main()
{
	float BMI,height,weight;

	printf("Enter weight in kilograms = ");
	scanf("%d",&weight);
   
   	printf("Enter height in meters = ");
	scanf("%d",&height);

	BMI=weight/(height*height);

	printf("Body Mass Index (BMI)=%f",BMI);

}