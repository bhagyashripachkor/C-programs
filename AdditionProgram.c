#include<stdio.h>
void main()
{
	//Program to find addition of two numbers
	int num1;
	unsigned short int num2;
	unsigned long int sum;
	printf("Enter number 1\n");
	scanf("%d", &num1);
	printf("Enter number 2\n");
	scanf("%hu", &num2);
	sum=num1 + num2;
	printf("\n The sum of two numbers is %lu:-",sum);

	//Program to find subtraction of two numbers
	int num3;
	unsigned long long int num4,sub;
	printf("Enter number 2\n");
	scanf("%llu",&num4);
	printf("Enter number 1 \n");
	scanf("%d", &num3);
	sub=num4 - num3;
	printf("\n The subtraction of two numbers is %llu:-",sub);

	//Program to find multiplication of two numbers
	float num5;
	double num6;
	long double mult;
	printf("enter number 1 \n");
	scanf("%f",&num5);
	printf("enter number 2\n");
	scanf("%lf",&num6);
	printf("multiplication of two numbers is %Lf",num5*num6);

	//Program to find division of two numbers
	unsigned long long int num7;
	int num8;
	float divi;
	printf("Enter number 1\n");
	scanf("%llu", &num7);
	printf(" Enter number 2\n");
	scanf("%d",&num8);
	divi=(float)num7/num8;
	printf("division of two numbers is %f",divi);

}
