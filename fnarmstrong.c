#include<stdio.h>
int arm(int a, int len);
int main()
{
    int a,ans,len;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the no of digits");
    scanf("%d",&len);
    ans=arm(a,len);
    printf("%d",ans);
}
int arm(int a,int len)
{
    int i,s=0,b,c,j;
    c=a;
    for(i=0;i<len;i++)
    {
        b=c%10;
        for(j=0;j<len-2;j++)
        {
            b*=b;
        }
        s+=b;
        c=c/10;
    }
    if(a==s)
    return 1;
    else
    return 0;

}