#include<stdio.h>
#include<conio.h>
void main() {
         int a,b ,c;
          printf("\nenter three number:");
           scanf("%d%d%d",&a,&b,&c);
            if(a>b)
{
            if(a>c)
             printf("\na=%d",a);
              else
                printf("\nc=%d",c);
}
            else
{
                if(b>c)
                 printf("\n=%d",b);
                  else
                   printf("\nc=%d",c);
}
                getch();
}
