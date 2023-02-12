// In this program we take integer input only 

#include<stdio.h>

int main(){
    int x=0;
    x=getintegeronly();
    printf("\n enter a value:");
    return 0;
}

int getintegeronly(){
    int num=0,ch;
    do 
    {
        ch=getch();
        if(ch>=48&&ch<57)
        {
            printf("%c",ch);
            num=num*10+(ch-48);
        }
        if(ch==13)
        break;
    }while(1);
    return(num);
}