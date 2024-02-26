#include<stdio.h>
int rev(int a, int len);
int main()
{
    int a,ans,len;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the no of digits");
    scanf("%d",&len);
    ans=rev(a,len);
    printf("%d",ans);
}
int rev(int a,int len)
{
    int i,s=0,b;
    for(i=0;i<len;i++)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
    }
    return s;

}