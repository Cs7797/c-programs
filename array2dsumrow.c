#include <stdio.h>
int main()
{
    int a[10][10],i,j,c,r,s=0;
    printf("enter the no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<r;j++)
    {
        for(i=0;i<c;i++)
       {
            s=s+a[j][i];
       }
       printf("\n%d",s);
       s=0;
    }
    
    return 0;
}