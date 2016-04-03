#include<stdio.h>
void main()
{
	int i,j,k,n,total;
	int array1[3][3],array2[3][3],sum[3][3];
	int array3[10][10],array4[10][10],mult[10][10];
//	printf("enter matrix  1\n");
//scanning first matrix for addition
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				scanf("%d",&array1[i][j]);
			}
	}
/*	printf("matrix 1 is:-\n");
	for(i=0;i<3;i++)
	 {
		for(j=0;j<3;j++)
			{
				printf("%d\t",array1[i][j]);
				
			}
			printf("\n");
	}*/
////scanning second matrix for addition
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				scanf("%d",&array2[i][j]);
			}
	}
/*	printf("matrix 2 is:-\n");
	for(i=0;i<3;i++)
	 {
		for(j=0;j<3;j++)
		{
				printf("%d\t",array2[i][j]);
				
			}
			printf("\n");
	}*/
	//ask user to enter the value of n
    scanf("%d",&n);
    
//scanning first matrix for multiplication	
//	printf("enter matrix  1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				scanf("%d",&array3[i][j]);
			}
	}
	

/*	printf("matrix 1 is:-\n");
	for(i=0;i<r1;i++)
	 {
		for(j=0;j<c1;j++)
			{
				printf("%d\t",array3[i][j]);
				
			}
			printf("\n");
	}*/


//scanning first matrix for multiplication	
//	printf("enter matrix  1\n");
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				scanf("%d",&array4[i][j]);
			}
	}

/*	printf("matrix 2 is:-\n");
	for(i=0;i<r2;i++)
	 {
		for(j=0;j<c2;j++)
			{
			    printf("%d\t",array4[i][j]);
				
			}
			printf("\n");
	}*/

	
//calculating the addition of two matrix
//	printf("matrix sum is:-\n");
	for(i=0;i<3;i++)
	 {
		for(j=0;j<3;j++)
			{
				sum[i][j]=array1[i][j]+array2[i][j];
				
			}
			
	}
//printing the sum matrix
	for(i=0;i<3;i++)
	 {
		for(j=0;j<3;j++)
			{
				printf("%d\n",sum[i][j]);
				
			}
	}

for(i=0;i<n;i++)
	 {
		for(j=0;j<n;j++)
			{
				total=0;
				for(k=0;k<n;k++)
				{
					total=total+array3[i][k]*array4[k][j];
				
				}
				sum[i][j]=total;
			}
//printing multiplication matrix			
	}
	for(i=0;i<n;i++)
	 {
		for(j=0;j<n;j++)
			{
				printf("%d\n",sum[i][j]);
				
			}
		
	}
	

}
