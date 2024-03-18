#include<stdio.h>
void main()
{
	int i = 1, a;

	printf("Enter the value =");
	scanf("%d",&a);

	do{
		if(i % 2 == 0){
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=a);
}