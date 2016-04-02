#include<stdio.h>

void main()
{
	int num1=0,num2=0,n;
	
	do
	{
	printf("enter any number your choice\n");
	printf("0.Exit\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulus\n");
	scanf("%d",&n);
		switch(n)
		{
			case 0: 
					break;
					
			case 1: printf("Enter two numbers\n");
					scanf("%d\n",&num1);
					scanf("%d",&num2);
					printf("addition=%d\n",num1+num2);
					break;

			case 2:-
					printf("Enter two numbers\n");
					scanf("%d\n",&num1);
					scanf("%d",&num2);
					printf("subtraction=%d\n",num1-num2);
					break;

			case 3: printf("Enter two numbers\n");
					scanf("%d\n",&num1);
					scanf("%d",&num2);
					printf("multiplication=%d\n",num1*num2);
					break;

		    case 4: printf("Enter two numbers\n");
					scanf("%d\n",&num1);
					scanf("%d",&num2);
					printf("division=%d\n",num1/num2);
					break;

			 case 5:printf("Enter two numbers\n");
					scanf("%d\n",&num1);
					scanf("%d",&num2);
					printf("division-=%d\n",num1%num2);
					break;

			default:printf("operations");
					break;
		}

	}while(n!=0);
}
