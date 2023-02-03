#include<stdio.h>
#include<conio.h>
		   void sum();     //function decleration
		    void main() {
		     sum();         //function calling
		      getch();
}
		  void sum()        // function defination
	     {
		    int a,b,c;
		     printf("\n enter two number");
		       scanf("%d%d",&a,&b);

		  c=a+b;
		    printf("\n sum=%d",c);
	      }