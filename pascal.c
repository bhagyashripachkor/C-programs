
#include<stdio.h>
//calculate the pasacal triangle by entering 
int calpascal(int r,int c)
{
	//if column is 0
	if(c==0) 
		return 0;
	//if row and column both are zero
	else if(r==1&&c==1)
		return 1;
	//if colum is greater than row
	else if(c>r) 
		return 0;
	//subtract one row and one column to go to previous row to get first digit
	//also subtarct one row and column to get other digit
	//now add two numbers
	else
		return (calpascal(r-1,c-1)+calpascal(r-1,c));
}

//function to print the spaces between each number
void tab(int num1,int result) 
{
int i;
num1*=result;

for(i=0;i<num1;i++)
printf(" ");

}

void main()
{
int number,i,j;
//printf("\nEnter the number");
//scanning value from user
scanf("%d",&number);
//check if untill number
for(i=1;i<=number;i++)
{
	tab(number-i,3);
	for(j=1;j<=i;j++)
	//calling calculate pascal funtion with the spaces
	{
		printf("%3d",calpascal(i,j));
		tab(1,3);
	}
	printf("\n");
}
}



