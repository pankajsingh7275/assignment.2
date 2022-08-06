#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter two no to swap its value");
    scanf("%d %d",&a,&b);
    c=a+b;
    b=a;
    a=c-b;
    printf("%d %d",a,b);
    return 0;



}