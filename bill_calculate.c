#include<stdio.h>
#include<conio.h>
void main ()
{
    float unit,bill;
clrscr();
printf("\nenter tottal digit");
scanf("%f",&unit);
if(unit<=100)
bill=500+(unit*1.5);
else if(unit<=200);
bill=500+(100*1.5)+(unit-100)*2.0;
else if(unit<=300)
bill=500+(100*1.5)+(100*2.0)+(unit-200)*2.5;
else if(unit<=500)
bill=500+(100*1.5)+(100*2.0)+(100*2.5)+(unit-300)*3.0;
getch();
}

