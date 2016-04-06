#include<stdio.h>
#include<math.h>
void main()
{
	float simple_interest=0.0;
	long int principal_amount=0;
	float years=0.0,compound=0.0;
	float rate_of_interest=0.0;
	float interest_per_year=0;
	float ROI=0.0;
	float compound_interest;
	printf("Please enter the principal amount\n");
	scanf("%lu",&principal_amount);
	printf("Please enter the number of years\n");
	scanf("%f",&years);
	printf("Please enter the rate of interest\n");
	scanf("%f",&rate_of_interest);
	ROI=0.01*rate_of_interest;
	simple_interest=principal_amount*years*ROI;
	printf("Simple interest is =%.06f",simple_interest);

	printf("Calculate compound interest");
	printf("Please enter the number of times interest is compounded per year\n");
	scanf("%d",&interest_per_year);
	
	
	compound_interest=principal_amount * pow ((1+(rate_of_interest/interest_per_year)),(interest_per_year*years));
	compound=compound_interest-principal_amount;
	//compound_interest=principal_amount * pow ((1+(rate_of_interest*principal_amount)*(100*years)),(interest_per_year*years));
	printf("compound interest is=%f",compound);
}
