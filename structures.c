#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    int phone;
   
};
int main()
{
    int i,b;
    struct student a[10];
    printf("enter no of records");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("enter roll no");
        scanf("%d",&a[i].roll);
        printf("enter name");
        scanf("%s",&a[i].name);
        printf("enter phone");
        scanf("%d",&a[i].phone);
    }
     for(i=0;i<b;i++)
    {
        printf("\nroll no %d",a[i].roll);
        printf("\nname is %s",a[i].name);
        printf("\nphone is %d",a[i].phone);
        
    }
    return 0;
}