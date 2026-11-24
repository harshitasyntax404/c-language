#include<stdio.h>

void main()
{
	int basesalary, hra , da, ta;
	float grossSalary;
	
	printf("enter basesalary :");
	scanf("%d",&basesalary);
	
	printf("enter hra :");
	scanf("%d",&hra);
	
	printf("enter da :");
	scanf("%d",&da);
	
	printf("enter ta :");
	scanf("%d",&ta);
	
	 grossSalary = basesalary + (basesalary * hra/100) + (basesalary * da/100) + (basesalary * ta/100);
	
	printf("grossSalary = %d ", grossSalary);
	
}


