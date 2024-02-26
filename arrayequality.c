#include<stdio.h>
int main()
{
    int a[5],b[5],i,c,z=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=b[i])
        {
            z++;
            break;
        }
    }
    if(z==0)
    printf("equal");
    else
    printf("not equal");
    return 0;
}
