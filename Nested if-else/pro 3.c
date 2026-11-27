#include<stdio.h>

void main()
{
	// wap to find maximum from 4 numbers using nested if else.
	
	int a , b , c , d;
	
	// a\b , a\c , a\d ;
	// , b\c , b\d;
	//  ,  , c\d;



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
		//a ,c,d
		if(a>c)
		{
			//a ,d
			if(a>d)
			{
				printf(" a is max");	
			}
			else{
				printf("d is max");
			}	
		}
		else{
			//c ,d
			if(c>d)
			{
				printf("c is max");
			}
			else{
				printf("d is max");
			}
		}
	}
	else
	{
		//b , c ,d
		if(b>c)
		{
			// b , d
			if(b>d)
			{
				printf("b is max");
			}
			else
			{
				printf("d ia max");
			}
		}
		else
		{
			// c ,d 
			if(d>c)
			{
			 printf("d is max");	
			}
			else
			{
				printf("c is max");
			}	
		}
	}
}
	
