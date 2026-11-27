#include<stdio.h>

void main()
{
	// wap to calculate grade based on percentage of 5 subjects of 100 marks.
	
	int eco, ba , stat , acc ,com;
	float percentage;
	
	printf("Enter marks of eco :");
	scanf("%d",&eco);
	
	printf("Enter marks of ba :");
	scanf("%d",&ba);
	
	printf("Enter marks of stat :");
	scanf("%d",&stat);
	
	printf("Enter marks of acc :");
	scanf("%d",&acc);
	
	printf("Enter marks of com :");
	scanf("%d",&com);
	
	percentage = ( eco + ba + stat + acc + com)/5;
	
	printf("\nYour percentage is :%.2f\n",percentage);
	
	if(91>=100)
	{
		printf("Youre grade is +A/n");
	}
	
	else if(81>=90)
	{
		printf("Youre grade is A");
	}
	else if(71>=80)
	{
		printf("Youre grade is +B");
	}
	else if(61>=70)
	{
		printf("Youre grade is B");
	}
	else if(51>=60)
	{
		printf("Youre grade is +c ");
	}
	else if(41>=50)
	{
		printf("Youre grade is c");
	}
	else
	{
		printf("You are failed\n\n");
	}
	
}
