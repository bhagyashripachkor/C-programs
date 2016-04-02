#include<stdio.h>
void main()
{
        int i,sum=0,n,square,quot,rem;
     
        printf("\nenter the number");
        scanf("%d",&n);
             
      do{
            rem=n%10;
            n=n/10;
            square=rem*rem;
            sum=sum+square;
                           
     }
     while(n!=0);
     printf("%d",sum);
       
}
