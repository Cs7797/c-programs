#include<stdio.h>
int pal(int a, int len);
int main()
{
    int a,ans,len;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the no of digits");
    scanf("%d",&len);
    ans=pal(a,len);
    printf("%d",ans);
}
int pal(int a,int len)
{
    int i,s=0,b,c;
    c=a;
    for(i=0;i<len;i++)
    {
        b=c%10;
        s=s*10+b;
        c=c/10;
    }
    if(a==s)
    return 1;
    else
    return 0;

}