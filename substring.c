#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    int i,j,pos,k,z=0;
    printf("enter the string");
    gets(a);
    printf("enter the string to be searched");
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[0])
        {   pos=i;
            for(k=pos,j=0;j<strlen(b);j++,k++)
            {
            if(a[k]!=b[j])
            {
                break;
                z=1;
            }   
            }
            if(j==strlen(b))
            {
                printf("found at %d",i);
            } 
            
        }
        
    }
    return 0;
}