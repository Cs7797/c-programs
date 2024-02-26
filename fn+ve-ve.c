#include<stdio.h>
int fn1(int a);
int main()
{
    int a,ans;
    printf("enter the number");
    scanf("%d",&a);
    ans=fn1(a);
    printf("%d",ans);
    return 0;
}
int fn1(int a)   
{
    if(a>0)
    return 1;
    else if(a<0)
    return -1;
    else if(a==0)
    return 0;

}
