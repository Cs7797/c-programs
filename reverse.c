#include<stdio.h>
void main()
{
    int a,b,s=0,i;
    printf("enter the no");
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
    }
printf("the no is %d",s);
}