#include<stdio.h>
     void main()
     {
         char donar,reciever;
         scanf("%c %c",&donar,&reciever);
         if(donar=='1')
          {
                printf("\nCompatible");
          }
    
        if(donar=='2'&& reciever=='2'||reciever=='4'||reciever=='7'||reciever=='6')
        {
            printf("\nCompatible");
        }
        if(donar=='4'&&reciever=='4'||reciever=='7')
        {
            printf("\nCompatible");
        }
        if(donar=='3'&& reciever=='3'||reciever=='4'||reciever=='7'||reciever=='8')
        {
            printf("\nCompatible"); 
        }
        if (donar=='6'&&reciever=='6'||reciever=='7')
        {
            printf("Compatible");
        }
        if(donar=='5'&& reciever=='6'||reciever=='5'||reciever=='7'||reciever=='8')
        {
            printf("\nCompatible");
        }
        if(donar=='8'&&reciever=='8')
        {
           printf("\nCompatible");
        }
        if(donar=='7'&&reciever=='7'||reciever=='8')
        {
            printf("\nCompatible");
        }
        else
        
            printf("\nNot compatible");
        
        return;
 }
