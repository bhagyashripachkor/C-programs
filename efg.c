#include<stdio.h>
#include<string.h>
/*
C program that uses library to display following values:
Display full name of the person.
How many alphabets are there in his name?
What is his email address?
His car number is printed in reverse order, display actual car number.*/

void main()
{
	char str[1000]="::FIRSTNAME:Krishna::MIDDLENAME:Prasad::LASTNAME:Iyer::EMAIL:kpIyer@microsoft.com::CARNO:1221 YC 90PA::";
	 
  int   cnt = 0,len=0,sum=0,pos,l=0,j=0,x=0,f1=0,f2=0;
	char *token;
  char *array[50];
  char fullname[30];
  char email[21];
  char *rev;
	 
	const char s[2] = ":";
  token = strtok(str, s);
   
   int i=0;
   //splitting the string into single token using : as delimiter
   while( token != NULL ) 
   {
    //stroing each token into an array
      array[i]=token;
      len=strlen(token);
      
      //printf("%s\n", array[i]);
      //printf("%d\n",len);
      token = strtok(NULL, s);
      cnt++;
      i++;
     
   }
   //printf("%d",cnt);
   for(j=0;j<cnt;j++)
   {
    //check for FIRSTNAME
    if(!(strcmp((array[j]),"FIRSTNAME")))
    {
      j++;
      //printf("%s\n",array[j]);
      //calculate the length
      l=strlen(array[j]);
      //printf("%d",l);
      strcpy(fullname,array[j]);
      sum=sum+l;
      //break;
    }
    
    if(!(strcmp((array[j]),"MIDDLENAME")))
    {
      //check for MIDDLENAME
      j++;
      //printf("%s\n",array[j]);
      l=strlen(array[j]);
      //printf("%d",l);
      strcat(fullname," ");
      strcat(fullname,array[j]);
      sum=sum+l;
      //break;
    }

     if(!(strcmp((array[j]),"LASTNAME")))
    {
      //check for LASTNAME
      j++;
      //printf("%s\n",array[j]);
      l=strlen(array[j]);
      //printf("%d",l);
      strcat(fullname," ");
      strcat(fullname,array[j]);
      sum=sum+l;
      //break;
    }
    if(!(strcmp((array[j]),"EMAIL")))
    {
      int z=0;
      //check for EMAIL
      j++;
      f1=1;
      
      //printf("%s\n",array[j]);

      //l=strlen(array[j]);
      //l++;
      strcpy(email,array[j]);
      //email[z]=array[j];
      //printf("%d",l);
     
    }
    if(!(strcmp((array[j]),"CARNO")))
    {
      //check for CARNO and reverse it
      j++;
      f2=1;
      rev=strrev(array[j]);
      //printf("%s\n",array[j]);
      //l=strlen(array[j]);
      //printf("%d",l);
      
    }

   }
   
   printf("%s\n",fullname);
   printf("%d\n",sum);
   if(f1==1)
    printf("%s\n",email);
  if(f2==1)
    printf("%s",rev);
   

    
}
