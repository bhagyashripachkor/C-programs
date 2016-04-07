#include<stdio.h>
void main(){
  int number,n=1,a,b;
  printf("\nEnter a number:");
  scanf("%d",&number);
  while(n<=number)
  {
      b=0;
      if(number%n==0)
      {
         a=1;
          while(a<=n)
          {
            if(n%a==0)
              b++;
              a++;
          }
          if(b==2)
             printf("\n%d",n);
      }
      n++;
   }
}
