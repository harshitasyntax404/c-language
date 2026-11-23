#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to convert second into hh:mm:ss.
	
	int second;
	
	printf("Enter  second:");
	scanf("%d",&second);

	int minutes = second/60;
	int hours = minutes/60;
	minutes =minutes - (hours* 60);
	second = second - (minutes*60) -(hours*60*60);
	
	printf("%d:%d:%d\n",hours,minutes, second);
}
