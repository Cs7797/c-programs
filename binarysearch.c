# include <stdio.h>
int main()
{
    int a[10],start,size,i,el,pos,mid,end;
    size=10,end=size-1,pos=-1;
    for(i=0;i<size;i++)
    {
        printf("enter the no for the array");
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&el);
    while(start<size-1)
    {
        mid=(start+end)/2;
        if(a[mid]==el)
        {
            pos=mid;
            break;
        }
        else if(a[mid]<el)
        {
            start=mid+1;
        }
        else if(a[mid]>el)
        {
            end=mid-1;
        }
    }    
    if(pos==-1)
    printf("element not found");
    else
    printf("the position is %d",pos);
    return 0;
}