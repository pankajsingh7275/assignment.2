#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,n2,rot;
    printf("enter a number");
    scanf("%d",&n);
    n1=n%10;
    n2=n/10;
    rot=n1*100+n2;
    printf("the rotated no is %d",rot);
    getch();


}