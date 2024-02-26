# include <stdio.h>
int main()
{
    int a[10],size,i,t,j;
    size=10;
    for(i=0;i<size;i++)
    {
        printf("enter the no for the array");
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+i];
                a[j+i]=t;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
        
    }
    return 0;
}