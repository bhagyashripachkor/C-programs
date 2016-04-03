#include<stdio.h>
#include<stdlib.h>

int MissingNo (int a[], int n)
{
    int i, total;
    total  = (n+1)*(n+2)/2;   
    for ( i = 0; i< n; i++)
       total -= a[i];
    return total;
}
 
void main()
{
	int *p,i;
    int array[100];
    p=(int *)malloc(sizeof(int)*100);
    for(i=0;i<100;i++)
    	array[i]=i+1;
    
    int miss = MissingNo(p,100);
    printf("%d", miss);
    getchar();
}
    
