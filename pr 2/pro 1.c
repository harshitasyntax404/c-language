#include<stdio.h>

void main()
{
	//step 1: grade calculation.
	
	int per;
	
	printf("Enter Youre per:");
	scanf("%d",&per);
	
		// useing ternary operator.
		//(condition)? 1 : 0 ;
	
	char grade = (per>=91 && per<=100)? 'A' 
	            :(per>=81 && per>=90)? '+A'
				:(per>=61 && per>=70)? '+B'
			    :(per>=51 && per>=60)? 'B'
				:(per>=41 && per>=50)? 'C'	
				:(per>=31 && per>=40)? 'D'
				: 'F';
	printf( "Youre grade is :%c\n", grade);
	
	//step 2: Additional comments.
	

	
//	printf("Excellent work!");
//	printf("Well done.");
//	printf("Good job.");
//	printf("You passed, but you coulde do better."); 
//	printf("Sorry you failed.");
	
//	printf("enter youre grade");
//	scanf("%c",&option);
	
	 // useing Switch-case.
	 
	switch(grade)
	{
		case 'A': printf("Excellent work!\n");
		break;
		case 'B': printf("Well done.\n");
		break;
		case 'C': printf("Good job.\n");
		break;
		case 'D': printf("You passed, but you coulde do better.\n");
		break;
		case 'F': printf("Sorry you failed.\n");
		break;
		default : printf("Enter valid input");
	}
			
	// step 3 : Eligibity check.
	
	// useing if-else.		
		
	if(per>41)
	{
		printf("You are eligible for the next level.");
	}
	else
	{
		printf("Please try again next time.");	
	}
		
		
}

