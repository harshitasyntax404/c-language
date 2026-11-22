#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to convert second into hh:mm:ss.
	
	int second, hh , mm , ss;
	
	printf("Enter  second:");
	scanf("%d",&second);
	
	hh = second / 3600 ;
	mm = (second % 3600 ) /60 ;
	ss = second %60 ;
	
	printf("hh , mm, ss \n", hh, mm, ss);
}
