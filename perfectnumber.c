#include<stdio.h>

void main()
{
  int num,z=1,y=2,i=1,x,total=0;
  scanf("%d",&num);
  if(num<1)
  {
    printf("invalid number\n");
  }
  else
  {
  while(i<=num)
  {
    while(z<y)
    {
      x=y%z;
      if(x==0)
      {
        total=total+z;
        z++;
      }
      else
      {
        z++;
      }
      
    }
    if(total==y)
    {
      printf("%d\n",y);
      i++;
    }
    total=0;
    y++;
    z=1;

  }
}
}
	
  
  
