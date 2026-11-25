#include<stdio.h>

void main()

{
	//WAP TO CHECK USER IS ELIGIBLE FOR VOTE OR NOT.
	
	int age;
	printf("Enter a age :");
	scanf("%d",&age);
	
	if(age<100)
	{
		printf("Enter a valid age");
	}
	else if(age>18)
	{
		printf("you are eligible for vote");
	}
	else if (age<=0)
	{
		printf("Enter a valid age");
	}
	
}
