#include<stdio.h>
void main()
{
	int number,i,flag=0,d,c=1,b=1,count,j,cnt;
	printf("enter the number");
	scanf("%d",&number);

	if(number<=0)
	printf("invalid input");
	else
	{
	i=number+1;
	do
	{		
			if(i%2!=0)
			{
				d=i%b;
				if(d==0)
				{
					count++;
					b++;
				}
				else
				{
				b++;
				flag=1;
				break;
	/*			for(j=2;j<=i/2;j++)
				{
                   if(i%j==0)
                  {
                     count++;
                     break;
                   }
                }
               if(count==0 && i!= 1)
               flag=1;*/
   			}
   	}
	    i++;
	 } while(i>number);
	
	if(flag==1)
	printf("%d",i);		
    else
	printf("not prime number");
}
}
