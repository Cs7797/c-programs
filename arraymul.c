#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r,col;
    printf("enter the required no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&col);
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter 1 array");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter 2 array");
            scanf("%d",&b[i][j]);
        }
    }
    printf("array 1");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
            
        }
        printf("\n");
    }
    printf("array 2");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",b[i][j]);
            
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(int k=0;k<r;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("the array is found to be");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",c[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}