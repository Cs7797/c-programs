#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,z=0,r,c,s[10][10];
    printf("enter the required no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter 1 array");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter 2 array");
            scanf("%d",&b[i][j]);
        }
    }
    printf("array 1");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            
        }
        printf("\n");
    }
    printf("array 2");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",b[i][j]);
            
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           s[i][j]=a[i][j]+b[i][j];
           
        }
            
    }
    
    printf("the sum is");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",s[i][j]);
            
        }
        printf("\n");
    }
        
    return 0;
}