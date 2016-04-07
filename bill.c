#include<stdio.h>
void main()
{
	float bill=0.0;
	int no_of_units=0,units=0;
	scanf("%d",&no_of_units);
	if(no_of_units>0 && no_of_units<=50)
		units=1;
	else if (no_of_units>=51 && no_of_units<=100)
		units=2;
	else if (no_of_units>=101 && no_of_units<=150)
		units=3;
	else if (no_of_units>=151 && no_of_units<=200)
		units=4;
	else if (no_of_units>=201 && no_of_units<=250)
		units=5;
	else if (no_of_units>=251 && no_of_units<=300)
		units=6;
	else if (no_of_units>=301 && no_of_units<=400)
		units=7;
	else if (no_of_units>=401 && no_of_units<=500)
		units=8;
	else
		units=9;

	switch(units)
	{
		case 1:bill=no_of_units*2.6;
				printf("%f",bill);
				break;

		case 2:bill=no_of_units*3.25;
				printf("%f",bill);	
				break;

		case 3:bill=no_of_units*4.88;
				printf("%f",bill);	
				break;

		case 4:bill=no_of_units*5.63;
				printf("%f",bill);	
				break;

		case 5:bill=no_of_units*6.38;
				printf("%f",bill);	
				break;

		case 6:bill=no_of_units*6.88;
				printf("%f",bill);	
				break;

		case 7:bill=no_of_units*7.38;
				printf("%f",bill);
				break;	

		case 8:bill=no_of_units*7.88;
				printf("%f",bill);
				break;

		case 9:bill=no_of_units*8.38;
				printf("%f",bill);
				break;	

		default:printf("you entered invalid input");		
	}

}
