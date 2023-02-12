//swapping of two integers

#include<stdio.h>

int main(){
    int a,b,chet;  // chet is temperory value
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    chet=a;
    a=b;
    b=chet;
    printf("a=%d b=%d",a,b);
    return 0;
}
