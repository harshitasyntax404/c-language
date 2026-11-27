#include<stdio.h>

void main()
{
	// wap to find maximum from 4 numbers using nested if else.
	
	int a , b , c , d , e;




	printf("Enter num for a :");
	scanf("%d",&a);
	
	printf("Enter num for b :");
	scanf("%d",&b);
	
	printf("Enter num for c :");
	scanf("%d",&c);
	
	printf("Enter num for d :");
	scanf("%d",&d);
	
	printf("Enter num for e :");
	scanf("%d",&e);
	
	if(a>b)
	{
		//a ,c,d , e
		if(a>c)
		{
			//a ,d , c ,e
			if(a>d)
			{
				// a,e
				if(a>e)
				{
					printf("a is max");
				}
				else
				{
					printf("e is max");		
				}	
			}
			else
			{ 
				// d , c ,e
				if(d>c)
				{
					//d ,e
					if(d>e)
					{
						printf("d is max");
					}
					else
					{
						printf("e is max");
					}
				}
				else
				{
					// c ,e
					if( c>e)
					{
						printf("c is max");	
					}
					else
					{
						printf("e is max");	
					}	
				}
				
			}	
		}
		else{
			//c ,d , e 
			if(c>d)
			{
				//c ,e
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				//d ,e
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
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
	
