#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    int phone;
    int marks[5];
};
int main()
{
    int i,b,j;
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
        for(j=0;j<5;j++)
        {
            printf("enter marks");
            scanf("%d",&a[i].marks[j]);
        }
    }

     for(i=0;i<b;i++)
    {
        printf("\nroll no %d",a[i].roll);
        printf("\nname is %s",a[i].name);
        printf("\nphone is %d",a[i].phone);
        for(j=0;j<5;j++)
        {
            printf("\n%d",a[i].marks[j]);
        }

    }
    return 0;
}