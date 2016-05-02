#include<stdio.h>
     void main()
    {
        //program, using do-while loop to display immediate higher prime number.
    	int number,temp,f=0,divi,m=1,count;
        //printf("enter the number");
        //scanning input from user
        scanf("%d",&number);
        if(number<=0)
    	printf("invalid input");
        else if(number%2==0)
            printf("Invalid input.Please enter prime number");
    	else 
    	{
            //take next number of input number
    	temp=number+1;
    	do
    	{
    		  //check if number is not divisible by 2
    			if(temp%2!=0)
    			{
    				divi=temp%m;
    				if(divi==0)
    				{
    					count++;
  					    m++;
    				}
   				    else
    				{
    			         m++;
    				     f=1;
    				     break;
    			    }
    			}
    		
    	   
    	    temp++;
    	 } while(temp>number);
        }
    	
   	if(f==1)
    	printf("%d",temp);		
      //  else
    //	printf("not prime number");
      }
    
