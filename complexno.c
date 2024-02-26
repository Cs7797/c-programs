#include<stdio.h>
struct complex
{
    int x,y;
};
struct complex sum(struct complex a,struct complex b);
int main()
{
    struct complex a,b,z;
    printf("enter the real part");
    scanf("%d",&a.x);
    printf("enter the imaginary part");
    scanf("%d",&a.y);
     printf("enter the real part");
    scanf("%d",&b.x);
    printf("enter the imaginary part");
    scanf("%d",&b.y);
    z=sum(a,b);
    printf("%d i%d",z.x,z.y);
    return 0;
}
struct complex sum(struct complex a,struct complex b)
{
    struct complex c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}
