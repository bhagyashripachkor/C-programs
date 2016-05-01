#include<stdio.h>
#include<conio.h>
#include<string.h>

//char encode(char *message,int shift);
//void decode(char *message,int *shift);
void main()
{
	//char alpha[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char message[10],message2[10],encoded[10],decoded[10];
	int shift=0,shift2=0,i=0,j=0,k=0,len=0,x=0,y=0,len2=0,m=0;
	printf("\nenter the message");
	scanf("%s",&message);
	printf("\nenter the shift value");
	scanf("%d",&shift);
	len=strlen(message);
	
	for(i=0;i<len;i++)
	{
		
		x=message[i]+shift;
		
		 if(x<96)
		  	message[i]=message[i]+shift+26;
	   	else
		 	message[i]=message[i]+shift;
	}
	
	 	printf("%s",message);

	 	//decode

	 printf("\nenter the message");
	scanf("%s",&message2);
	printf("\nenter the shift value");
	scanf("%d",&shift2);
	len2=strlen(message2);
	 	for(m=0;m<len2;m++)
	{
		
		y=message2[m]-shift2;
		
		  if(y>=123)
		  
		 	message2[m]=message2[m]-shift2 -26;

		
		else
		 	message2[m]=message2[m]-shift2;
		
	}
	printf("%s",message2);
}
