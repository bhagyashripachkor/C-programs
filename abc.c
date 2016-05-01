#include<stdio.h>
#include<string.h>
void main()
{
char text[100],word[100],rpwd[100],str[10][10];
int k=0,i=0,j=0,w=0,p;
gets(text);
scanf("%s %s",word,rpwd);
p=strlen(text);
for(k=0;k<p;k++)
{
	if((text[k]!= ' '))
	{
	str[i][j]=text[k];
	k++;
	}
	else
	{
	str[i][j]='\0';
	j=0;
	i++;
	}
}
w=i;
for(i=0;i<=w;i++)
{
	if(strcmp(str[i],word)==0)
	strcpy(str[i],rpwd);
	printf("%s",str[i]);

}
}
