#include<stdio.h>
int main()
{
    int a[10],i,t,j;
   for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=0,j=i+5;j<10;j++,i++)
         {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
         }
    
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    } 
    return 0;
}    