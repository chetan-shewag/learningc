// header file
#include<stdio.h>
#include<conio.h>

int sum(int, int);  // function declaration

void main()
{
    int a, b, c; 
    // printf("%d %d",a , &a);
   // clrscr();
    printf("\n enter two number");
    scanf("%d %d", &a, &b);
    c = sum(a, b); // function call
    printf("\n sum = %d", c);
    getch();
}

int sum(int i, int j) // function defination
{
    int k;
    k = i + j;
    return k;
}

/* Function */
//  user-defined function
// built-in / library defined function

/*
// return type can be any data type -- void / int/ float/ char/ double

// functionName -- reserved  keyword can not be used for user-defined function name

// we pass on any argument or no argument  at all

// function body

return_Type functionName(datatype  argument1,datatype argument2){
    function body /// 
}

*/