#include<stdio.h>
#include<conio.h>
		  void sum (int,int);    //function decleration
		  void main()
{
		 int a,b;
		 clrscr();
		 printf ("\n enter two number");
		 scanf("%d%d",&a,&b);
		 sum(a,b);               // function calling
		 getch();
}
	  void sum (int i, int j)      // function defination
     {
	  int k;
	  k=i+j;
	  printf ("\n sum =%d",k);
      }