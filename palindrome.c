
#include<stdio.h>
//program to find palindrome of a number
int palindrome(int number)
{
    int sum=0,remaind;
    if(number!=0)
    {
         remaind=number%10;
         sum=sum*10+remaind;
         palindrome(number/10);
    }

    return sum;
}
void main()
{
    int number,sum;

    printf("Enter a number: ");
    //scanning the input from user
    scanf("%d",&number);
    //calling function palindrome to find if number is palindrome
    sum = palindrome(number);

    if(number==sum)
         printf("palindrome");
    else
        printf("not palindrome");

    
}
