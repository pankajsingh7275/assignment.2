#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter a three digit no to know its sum of digit");
    scanf("%d",&n);

      while(n>0)
      {
             rem=n%10;
             sum=sum+rem;
             n=n/10;
      }
    printf("the sum of digit is %d",sum);
    getch();


}