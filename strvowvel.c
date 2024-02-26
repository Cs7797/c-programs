#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int i,c=0,f=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            if(f==0)
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                {
                    c++;
                   
                }
                 f=1;
            }
            
        }
        else
        {
            f=0;
        }    
    }
    printf("no of words %d",c);
    return 0;

}