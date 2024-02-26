# include <stdio.h>
int main()
{
    int a[10],b,s,i;
    s=-1;
    for(i=0;i<10;i++)
    {
        printf("enter the no for the array");
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&b);
    for(i=0;i<10;i++)
    {
        if(a[i]==b)
        {
            s=i;
            break;
        } 
    }    

    if(s==-1)
    printf("element not found");
    else
    printf("the position is %d",s);
    return 0;
}