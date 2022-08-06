#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter a no to know whether its even or odd");
    scanf("%d",&n);
    if ((n&1)==0)
       
        printf("the no %d is even",n);
    
    else
    
        printf("the no %d is odd",n);
    
    getch();
    

}