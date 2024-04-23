#include<stdio.h>
main()
{
	int a,b,c;
	a=1;
	b=2;
	c=3;
    	printf("Press 1 for English\n");
		printf("Press 2 for Hindi\n");
		printf("Press 3 for Gujrati\n");

	switch(a){
		case 1:printf("Enter your choice: 1\n");break;
		case 2:printf("Enter your choice: 2");
		case 3:printf("Enter your choice: 3");
	}
		printf("\nPress 1 for Internet Recharge\n");
		printf("Press 2 for Top-up Recharge\n");
		printf("Press 3 for Special Recharge\n");

    switch(b){
		case 2:printf("Enter your choice: 2\n");
	
	//default ...
		default :printf("\nYou have successfully done Top-up Recharge.\n");
	}
	    
	 	printf("\nPress 1 for English\n");
		printf("Press 2 for Hindi\n");
		printf("Press 3 for Gujrati\n");
		 
		switch(b){
			case 1:printf("Enter your choice: 1\n");
		    case 2:printf("Enter your choice: 2\n");break;
		    case 3:printf("Enter your choice: 3");

		} 
		
		printf("\nInternet Recharge ke liye 1 dabaiye");
		printf("\nTop-up Recharge ke liye 2 dabaiye");
		printf("\nSpecial Recharge ke liye 3 dabaiye\n");
		
		switch(a){
		case 1:printf("Enter your choice: 1\n");
		
		//default ...	 
			 default:printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
		}
		
		printf("\nPress 1 for English\n");
		printf("Press 2 for Hindi\n");
		printf("Press 3 for Gujrati\n");
		
		switch(c){
		case 1:printf("Enter your choice: 1\n");
		case 2:printf("Enter your choice: 2\n");
		case 3:printf("Enter your choice: 3\n");
		}
		
		printf("\nInternet Recharge mate 1 dabavo\n");
		printf("Top-up Recharge mate 1 dabavo\n");
		printf("Special Recharge mate 1 dabavo\n");
		
		switch(c){
		case 1:printf("Enter your choice: 1\n");
		case 2:printf("Enter your choice: 2\n");
		case 3:printf("Enter your choice: 3\n");
			
		//default ...	
			default:printf("\nTame safaltapurvak Special Recharge karyu chhe.");
		}
}