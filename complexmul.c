#include<stdio.h>
struct complex
{
    float x,y;
};
struct complex sum(struct complex a,struct complex b);
int main()
{
    struct complex a,b,z;
    printf("enter the real part");
    scanf("%f",&a.x);
    printf("enter the imaginary part");
    scanf("%f",&a.y);
     printf("enter the real part");
    scanf("%f",&b.x);
    printf("enter the imaginary part");
    scanf("%f",&b.y);
    z=sum(a,b);
    printf("%f %fi",z.x,z.y);
    return 0;
}
struct complex sum(struct complex a,struct complex b)
{
    struct complex c;
    c.x=((a.x*b.x)-(a.y*-b.y))/((b.x*b.x)+(b.y*b.y));
    c.y=((a.x*-b.y)+(a.y*b.x))/((b.x*b.x)+(b.y*b.y));
    return c;
}
