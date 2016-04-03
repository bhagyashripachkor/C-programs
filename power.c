#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[10][10],i,j,*p,index,*x;
	printf("enter index value");
	scanf("%d",&index);
	if(index<0 || index>9)
		printf("invalid input");
	else
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
				{
					array[i][j]=i*j;
				}
		}
		
		for(j=0;j<10;j++)
		{
			p=&array[index][j];
			printf("%d\n",(*p)*2);
		}
	}



}
