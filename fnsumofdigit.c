#include<stdio.h>
int sumd(int a,int len);
int main()
{
    int a,ans,len;
    printf("enter the no");
    scanf("%d",&a);
    printf("enter the no of digits");
    scanf("%d",&len);
    ans=sumd(a,len);
    printf("%d",ans);
    return 0;
}
int sumd(int a,int len)
{
    int i,s=0,b;
    for(i=0;i<len;i++)
    {
        b=a%10;
        s=s+b;
        a=a/10;
    }
    return s;
}