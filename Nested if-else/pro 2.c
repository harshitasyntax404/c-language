#include<stdio.h>

void main()
{
	
	// wap to find minimum from 3 numbers using nested if else.
	
	int a ,b , c;
	
	printf("Enter num for a :");
	scanf("%d",&a);
	
	printf("Enter num for b :");
	scanf("%d",&b);
	
	printf("Enter num for c :");
	scanf("%d",&c);
	
	//a\b  a\c
	//  b\c
	
	
	if(a<b)
	{	
		// a win
		//printf("a is win");
		if(a<c)
		{
			//a is win
			printf("a is win");
		}
		else{
			//c is win
			printf("c is win");
			
		}
	}
	else{
		// a fail ,b win
		//printf("b is win");
		
		if(b<c)
		{
			//b is win
			printf("b is win");
			
		}
		else{
			// c is win
			printf("c is win");
		}
	}
}
