#include<stdio.h>
main()
{
	int a,b,c;
	a=8;
	b=3;
	c=12;
	
	(a<b && a<c) ? printf("The minimum value is: 8")
   :(b<c) ? printf("The minimum value is: 3")	
   :("The minimum value is: 12");
}