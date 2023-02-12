#include<stdio.h>
#include<conio.h>
    void main (){
     int i,n,multi=1;
      printf("\nenter an number:");
       scanf("%d",&n);
         for(i=1;i<=n;i++)
{
       multi=multi*i;
}
         printf("\nfactorial=%d",multi);
           
           
                getch();
}