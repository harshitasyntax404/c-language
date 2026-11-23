#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to calculate age based on birthdate.(date,month,year.
	
	int year,month,date ;
	int currentYear = 2026,currentMonth =11,currentDate=1;
	
	printf("Enter  date of birth:");
	scanf("%d",&date);

	printf("Enter  month of birth:");
	scanf("%d",&month);
	
	printf("Enter  year of birth:");
	scanf("%d",&year);
	
	printf("%d\n",currentYear - year);
	printf("%d\n",currentMonth - month);
	printf("%d\n",currentDate - date);

	
	printf("%d:%d:%d\n", date,month, year);
}
