#include<stdio.h>
void main()
{
	char input;
	printf("input char\n");
	scanf("%c",&input);
	if(input=='Y' || input=='y')
	{
		printf("input char\n");
		scanf("%c",&input);
		if(input=='Y' || input=='y')
		{
			printf("input char\n");
			scanf("%c",&input);
			if(input=='Y' || input=='y')
			{
				switch(input)
				{
					case1:
							if(input=='Y' || input=='y')
							{
								printf("Gtalk\n");
								printf("Yahoo\n");
								printf("MSN\n");
								printf("ICQ\n");
								printf("AIM\n");
								break;
							}
							else if(input=='N' || input=='n')
							
					case2:
							if(input=='Y' || input=='y')
								printf("Email personal\n");
								break;
							if(input=='N' || input=='n')
							{
								if(input=='Y' || input=='y')
									printf("Email work,be careful");
								else
									printf("Email personal\n");
							}
							break;

					case3:
							if(input=='Y' || input=='y')
								printf("Send text\n");
								break;
							if(input=='N' || input=='n')
						
					case4:
							if(input=='Y' || input=='y')
							{
								printf("Send a message on facebook\n");
								break;
							}	
							else
								printf("Give up.who needs friends that cant be contacted?\n");
							break;
				}
			}
			
			else if(input=='N' || input=='n')
			{	
				printf("input char\n");
				scanf("%c",&input);
				if(input=='N' || input=='n')
					printf("Call home\nVoicemail?");
				if(input=='Y' || input=='y')
					printf("Crap.Hang up\n");
			}

		}
		
		else if(input=='N' || input=='n')
		{
			switch(input)
				{
					case5:
							if(input=='Y' || input=='y')
							{
								printf("Gtalk\n");
								printf("Yahoo\n");
								printf("MSN\n");
								printf("ICQ\n");
								printf("AIM\n");
								break;
							}
							else if(input=='N' || input=='n')
							
					case6:
							if(input=='Y' || input=='y')
								printf("Email personal\n");
								break;
							if(input=='N' || input=='n')
							{
								if(input=='Y' || input=='y')
									printf("Email work,be careful");
								else
									printf("Email personal\n");
							}
							break;

					case7:
							if(input=='Y' || input=='y')
								printf("Send text\n");
								break;
							if(input=='N' || input=='n')
						
					case8:
							if(input=='Y' || input=='y')
							{
								printf("Send a message on facebook\n");
								break;
							}	
							else
								printf("Give up.who needs friends that cant be contacted?\n");
							break;
				} 
			
		}
	}
	
    else if(input=='N' || input=='n')
    {
    	printf("input char\n");
		scanf("%c",&input);
		if(input=='Y' || input=='y')
		{
			printf("Call cell\n");
			printf("input char\n");
			scanf("%c",&input);
			if(input=='Y' || input=='y')
			printf("Crap.Hang up\n");

		}
    }
	
}
