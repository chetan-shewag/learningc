//nested looping
//here we find the maximum number out of three number 
#include<stdio.h>
#include<conio.h>
void main () {
        int a,b,c;
                 
         printf("\n enter three number:");
          scanf("%d%d%d",&a,&b,&c);
           if(a>b)
 {
           if(a>c)
              printf("\nA=%d",a);
             else
              printf("\nC=%d",c);
 }
                else
 {
                if(b>c)
                  printf("\nB=%d",&b);
                   else
                     printf("\nC=%d",&c);
 }
 getch();
 }

