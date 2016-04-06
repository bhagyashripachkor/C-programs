#include<stdio.h>
void main()
{
	float marks_obtained=0.0;
	scanf("%f",&marks_obtained);
	
	if(marks_obtained<=100 && marks_obtained>=95)
		printf("Ex");
	
		else if(marks_obtained<=94 && marks_obtained>=90)
		printf("A+");
	
		else if(marks_obtained<=89 && marks_obtained>=85)
		printf("A");
	
		else if(marks_obtained<=84 && marks_obtained>=80)
		printf("B+");
	
		else if(marks_obtained<=79 && marks_obtained>=75)
		printf("B");
	
		else if(marks_obtained<=74 && marks_obtained>=70)
		printf("C");
	else
		printf("F");
	

}
