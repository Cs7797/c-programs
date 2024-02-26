#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i,c=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
        c++;
    }
    printf("no of letters are %d",c);
    return 0;
}