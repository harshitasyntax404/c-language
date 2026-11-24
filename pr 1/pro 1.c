#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to convert temrature celcius into farhenhight.
	
	int celcius;
	
	printf("Enter temprature in celcius:");
	scanf("%d",&celcius);
	
	float f = (celcius* 9/5) + 32;
	
	printf("f =%.2f",f);
}
