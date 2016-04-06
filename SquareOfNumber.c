#include<stdio.h>
void main()
{

	//program to find square of a number
	unsigned long int number,number1,number2,square,formula;
	printf("enter the number");
	scanf("%lu",&number);
	square=number*number;
 	printf("square of the number %lu is :- %lu",number,square);
 	//program to find (number1+number2)^2
 	printf("enter the first number");
 	scanf("%lu",&number1);
 	printf("enter the second number");
 	scanf("%lu",&number2);
 	formula=(number1*number1) + (number2*number2) +(2*number1*number2);
 	printf("(%lu + %lu )^2=%lu",number1,number2,formula);

 }
