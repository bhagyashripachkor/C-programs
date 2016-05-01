#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
char word[1000],temp[1000];
int count=0,cnt=0,i,j,x;
char c,*s,*c1,*c2;

   fp = fopen("C:\\Users\\user\\Desktop\\Bhagyashri\\CP modules\\module-17\\sample.txt","r");
   if(fp==NULL)
   	printf("unable to open the file");
   else
   
   	while(fscanf(fp,"%s",word)==1)
   	{
              
     //logic to remove spaces ,special characters , and numbers 
    for(i=0; word[i]!='\0'; ++i)
    {
        while (!((word[i]>='a'&&word[i]<='z') || (word[i]>='A'&&word[i]<='Z' || word[i]=='\0')))
        {
            for(j=i;word[j]!='\0';++j)
            {
                word[j]=word[j+1];

            }
            word[j]='\0';
            
        }
        //logic to convert small case to upper case
        //putchar(tolower(word[i]));
    }
    count++;
   }
   printf("word count is %d\n",count);
   fclose(fp);
}
