#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	scanf("%d",&a);

	switch(a){
	case 1:
		printf("Press 1 for Internet Recharge\n");
		printf("Press 2 for Top-up Recharge\n");
		printf("Press 3 for Special Recharge\n");
		scanf("%d",&b);

   switch(b){
   case 1:
   	printf("You have successfully done a Internet Recharge.\n");
   	break;

   case 2:
   	printf("You have successfully done a Top-up Recharge.\n");
   	break;

   case 3:
   	printf("You have successfully done a Special Recharge.\n");
   	break;

   }
   break;

	case 2:
		printf("Internet Recharge ke liye 1 dabaiye\n");
		printf("Top-up Recharge ke liye 2 dabaiye\n");
		printf("Special Recharge ke liye 3 dabaiye\n");
		scanf("%d",&c);

   switch(c){
   case 1:
   	printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
   	break;

   case 2:
   	printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
   	break;

   case 3:
   	printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
   	break;

   }
break;
	case 3:
		printf("Internet Recharge mate 1 dabavo.\n");
		printf("Top-up Recharge mate 1 dabavo.\n");
		printf("Special Recharge mate 1 dabavo.\n");  
		scanf("%d",&d);


   switch(d){
   case 1:
   	printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
   	break;

   case 2:
   	printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
   	break;

   case 3:
   	printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
   	break;
	}

	break;

default:

	printf("Its a Not available...");
      
}
}




