#include <stdio.h>
int main()
{
    int a[10][10],i,j,c,r;
    printf("enter the no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",c);
    for(i=0;i<r;i++)
    {
        for(j=0;j=c;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j=c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}