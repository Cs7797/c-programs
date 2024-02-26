#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i,b=0,j;
    gets(a);
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
      if(a[i]!=a[j])
      {
        b=1;
        break;
      }

    }
    if(b==1)
    printf("not a palindrome");
    else 
    printf(" palindrome");
    return 0;
}