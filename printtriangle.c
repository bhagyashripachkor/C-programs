#include<stdio.h>

void triangular(int n)
{
	int sum=0,i;
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d + %d\n",i,sum);

	}
	
}
int main()
{
	int n,triangle;
	printf("enter the number\n");
	scanf("%d",&n);
	if(n<0)
		printf("Invalid input");
	else
	triangular(n);

	//getch()
	return 0;
}
