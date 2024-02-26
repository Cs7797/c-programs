#include<stdio.h>
int main()
{
    int a[5],i,b,s=0,j;
    for(i=0;i<5;i++)
    {
        printf("enter array");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
          b=a[i]%10;
          s=s*10+b;
          a[i]=a[i]/10;
          
        }
        a[i]=s;
        s=0;
    }
    for(i=0;i<5;i++)
    {printf("\n%d",a[i]);
    }
    return 0;
        
}