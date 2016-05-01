#include<stdio.h>
#include<string.h>
#include<conio.h>
void sort(char *string1[],char *string2[],char *string3[])
{
	int l1=0,l2=0,l3=0;
	l1=strlen(string1);
	l2=strlen(string2);
	l3=strlen(string3);
	if(l1>l2 && l1>l3)
     {
		printf("%s\n",string1);
		if(l2>l3)
			printf("%s\n",string2);
		else
			printf("%s",string3);

	}
	else if(l2>l3)
	{
		printf("%s\n",string2);
		if(l1>l2)
			printf("%s\n",string1);
		else
		printf("%s",string3);
	 }
	 else if(l3)
	 {
	 	printf("%s\n",string3);
	 	if(l1>l2)
	 		printf("%s\n",string1);
	 	else
		printf("%s",string2);
	 }

}
int main(int argc,char *argv[])
{

  if(argc!=4) 
{
   printf("Arguments passed through command line " \
          "not equal to 4");
   return 1;
}
	char string1[10],string2[10],string3[3];
	// scanf("%s",&string1);
	// scanf("%s",&string2);
	// scanf("%s",&string3);
	sort(&string1,&string2,&string3);
	getch();


}
