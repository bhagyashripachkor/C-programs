#include<stdio.h>
#include<stdlib.h>
void main(){

    int i,number;
    int *array;
    int ch=0;

do{
    printf("Enter the number");
    scanf("%d",&number);
    array=(int *)malloc(sizeof(int)*number);
    array[0]=0;
    array[1]=1;

       for(i=2;i<number;i++)
        {
         
           array[i]=array[i-1] +array[i-2];
        }

   // printf("Fibonacci series is: ");
    for(i=0;i<number;i++)
         printf("%ld ",array[i]);

     printf("do you want to extend the total number?(0-Yes/1-No)\n");
     scanf("%d",&ch);
    array=realloc(array,sizeof(int)*number);
}while(ch!=1);
    
}
