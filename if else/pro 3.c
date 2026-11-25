#include<stdio.h>

void main()

{
	//WAP TO find min. no. from given 2 no. using if else.
	
	int number1;
	printf("Enter a number1 :");
	scanf("%d",&number1);
	
	int number2;
	printf("Enter a number2 :");
	scanf("%d",&number2);
	
	if(number1<number2)
	{
		printf("number is greater than number 1.");
	}
	else if(number1>number2)
	{
		printf("number is minimum  than number 2");
	}
	else if (number1=number2)
	{
		printf("both are same");
	}
	
}
