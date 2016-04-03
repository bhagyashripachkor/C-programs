#include<stdio.h>
//Take input (2 numbers) for multiplying using ethiopian method.
void main()
{
	int n1,n2,k,cnt=0,x,i,total=0;
	int array[10][10];
	//printf("enter the first number");
	scanf("%d\n",&n1);
	//printf("enter the second number");
	scanf("%d",&n2);
	//punt n1 into a temp variable k
	k=n1;
	//In the left-hand column repeatedly halve the last number, 
	//discarding any remainders, and write the result below the 
	//last in the same column, until you write a value of 1.
	while(k!=0)
	{
		k=k/2;
		cnt++;

	}
	//Now declare multidimensional array of size row count calculated above, 
	//and 2 columns representing 2 numbers.
	array[cnt][2];
	//In the right-hand column repeatedly double the last number and write the result below. 
	//stop when you add a result in the same row as where the left hand column shows 1.
	for(i=0;i<cnt;i++)
	{
		//if number is even then put 0 in respective position
		if(n1%2==0)
		{
			array[i][0]=0;
			array[i][1]=0;

		}
		else
		{
			//put the values of number n1 and n2 in array
			array[i][0]=n1;
			array[i][1]=n2;
		}

		n1=n1/2;
	    n2=n2*2;
		
	}

	//calculate the total by adding the values on right column dicrding the even rows
	for(x=0;x<cnt;x++)
	{
		total=total+array[x][1];
		
	}
	//printing the total
	printf("%d",total);
}
