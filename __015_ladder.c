//ladder nested looping
//here we find the grades of the students
#include<stdio.h>
#include<conio.h>
                   void main() {
                   int m;
                    printf("\nenter markes");
                      scanf("%d",&m);
                              if(m>100)
                               printf("\nenvalid"
                              else if(m>91)
                               printf("\nA+");
                              else if (m>81)
                               printf("\nA"); 
                              else if(m>71)
                               printf( "\nB+");
                              else if (m>61)
                               printf("\nB");
                              else if (m>=0)
                               printf("\nFAIL");
                              else
                               printf("\ninvalid");
                               
                   getch();
}