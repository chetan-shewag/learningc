#include<stdio.h>
#include<conio.h>
     void main () {
       int choice,a,b,c,sum;
       printf("\n1 addition");
       printf("\n2 prime number");

       printf("\n enter your choice:");
       scanf(" %d",&choice);
       switch(choice)
       {
           case 1:
                  printf("\nenter two number");
                  scanf("%d%d",&a,&b);
                  sum=a+b;
                  printf("\n sum is %d",sum);
            break;

            case 2:
                  printf("\nenter a number:");
                  scanf("%d",&a);
                   if (a%2==0)
                  printf("\n even");
                   else 
                 printf("\n odd");
            break;
      default:
      printf("\n error");     
                    



       }






     }