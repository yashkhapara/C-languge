#include<stdio.h>
void main()
{
	int f=0,s=1,n,a;

	printf("Enter the value =");
	scanf("%d",&a);

	for(int i=1; i<=a;i++) 
	{
		printf("%d\n",f);
		n=f+s;
		f=s;
		s=n;
	}
}0