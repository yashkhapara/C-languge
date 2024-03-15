#include<stdio.h>
void main(){
	int fy,sy;

	printf("Enter the value of fy :");
	scanf("%d",&fy);

	printf("Enter the value of sy :");
	scanf("%d",&sy);
	
	while(fy <= sy)
	{
		if(fy % 4 == 0)
			printf("%d \n",fy);

		fy++;
	}
}