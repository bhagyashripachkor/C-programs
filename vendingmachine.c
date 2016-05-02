#include<stdio.h>
     int main()
     {
     	int amount=0,change=0,f=0,x5=0,c1=0,t=0,x2=0,c2=0,o=0,x1=0,amtleft=0;
     	int ch=0;
     	do
     	{
     		
            //scanning the amount from user
            printf("Please enter the amount\n");
     		scanf("%d",&amount);
            //change left=amount - 15
    		change=amount-15;
    		f=change/5;
    		x5=x5+f;
    		c1=change%5;
   		    t=c1/2;
    		x2=x2+t;
    		c2=c1%2;
   		    o=c2;
    		x1=x1+o;

            //if amount value is 20 or 50 or 100 accept it
            if(amount==20 || amount==50 || amount==100)
            {
                //check if 5 rs coin are available
                if(x5<=100)
                {
                     printf("5Rs=%d\n",f);
                     printf("2Rs=%d\n",t);
                     printf("1Rs=%d\n",o);
                }
                //check if 2 rs coin are available
                else if(x2<=100)
                {
                     c1=change/2;
                     c2=c1%2;
                     printf("2Rs=%d\n",c1);
                     printf("1Rs=%d\n",c2);
                }
                //check if 1 rs coin are available
                else if(x1<=100)
                {
                     printf("one=%d\n",change);
                }
                else
                {
                     printf("NO CASH IN THE MACHINE\n");
                }
                //calculate remaining amount
           		amtleft=800-((x5*5)+(x2*2)+(x1*1));
                //check if remaining amount =0
                if(amtleft==0)
                {
                     printf("NO CASH IN THE MACHINE\n");
                     ch=0;
                }
                else
                {

                     printf("do you want to take another drink?(0/1)\n");
                     scanf("%d",&ch);
                }
            }
            else
            {
                printf("Invalid input\n");
                printf("do you want to take another drink?(0/1)\n");
                scanf("%d",&ch);
            }
            
     	}while(ch==1);
    }
