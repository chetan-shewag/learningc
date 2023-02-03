//nested looping
//here we find list of prime number
#include<stdio.h>
#include<conio.h>
void main()
{
                int n,i,chet=0;
                printf("\nenter an number:");
                scanf("%d",&n);
                for(i=2;i<n;i++)
{
                if(n%i==0)
                chet=1;
}
                if(chet==0)
                printf("\nPRIME");
                else
                printf("\nNot Prime");
                getch();
}