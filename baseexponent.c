#include<stdio.h>
#include<conio.h>
#include<math.h>
int powerFunction(int b,unsigned int e)
{
// 	unsigned long long int result;
// 	//result=pow(b,e);
// 	//(b*poweOfebr(b,e-1));
// 	result=b*powerOfeb(b,e-1);
// 	return result;
	if( e == 0)
        return 1;
    else if (e%2 == 0)
        return powerFunction(b, e/2)*powerFunction(b, e/2);
    else
        return b*powerFunction(b, e/2)*powerFunction(b, e/2);
}
// }
int main()
{

int b,e;
unsigned long long int result;
printf("enter the base value");
scanf("%d",&b);
printf("enter the exponent value");
scanf("%d",&e);
if((0<=b && b<=1024) && (0<=e && e<=13))
{
     result=powerFunction(b,e);
     printf("%lld",result);

}
else
printf("invalid input");
getch();
return 0;
}
