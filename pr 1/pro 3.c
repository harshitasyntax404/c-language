#include<stdio.h>

void main()
{
	int firstangle , secondangle;
	
	printf("enter first angle");
	scanf("%d",&firstangle);
	
	printf("enter second angle");
	scanf("%d",&secondangle);
	
	int  thirdangle = 180 - firstangle - secondangle;
	
	printf("triangle = %d", thirdangle);
}
