#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a[30];
    int i;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(isupper(a[i]))
            a[i]=tolower(a[i]);
        else if(islower(a[i])) 
            a[i]=toupper(a[i]);   
    }
    for(i=0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
    }
    return 0;

}