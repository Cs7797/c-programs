#include<stdio.h>
int prime(int a);
int main()
{
    int a,ans;
    printf("enter the no ");
    scanf("%d",&a);
    ans=prime(a);
    printf("%d",ans);
    return 0;
}
int prime(int a)
{
    int s=0,i;
    for(i=a;i>=1;i--)
    {
         if(a%i==0)
         s++;

    }
    if(s==2)
    return 1;
    else
    return 0;
   
}