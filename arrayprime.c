# include <stdio.h>
void main()
{
    int a[10],i,b,j,s,n;
     b=0,s=0;
    for(i=0;i<10;i++)
    {
        printf("enter the no for the array");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        n=a[i];
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                b++;

            }
        }
        if(b==2)
        {
            s++;
        }
        b=0;
    }  
printf("no of primes is %d",s);

}
    

