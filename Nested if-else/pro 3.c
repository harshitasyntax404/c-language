#include<stdio.h>

void main()
{
	// wap to find maximum from 4 numbers using nested if else.
	
	int a , b , c , d;
	
	// a\b , a\c , a\d ;
	// , b\c , b\d;
	//  ,  , c\d;

}

	printf("Enter num for a :");
	scanf("%d",&a);
	
	printf("Enter num for b :");
	scanf("%d",&b);
	
	printf("Enter num for c :");
	scanf("%d",&c);
	
	printf("Enter num for d :");
	scanf("%d",&d);
	
	if(a>b)
	{	
		// a is win
		if(a>c);
	 		printf("a is win");
		else{
			printf("c is win");
		}
		if(a>d);
	 		printf("a is win");
		else{
			printf("d is win");
		}
	}
	
	else{
		// a is defent
		
		if(b>c){
			//b win
			printf("b is win");
		}
		else{
			// b defe
			printf("c is win");
		}
		
		if(b>d){
			// b is win
			printf("b is win");
			
		}
		else{
			//d is win
			printf("d is win");
		}
		if(d>c)
		{
			// d id win
			printf("d is win");
			
		}
		else{
			//c is win
			printf("c is win");
		}
	}
	
	
	
