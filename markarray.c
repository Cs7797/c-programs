#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    int marks[5];
};
int main()
{
    struct student a[25];
    int r,i,s;

    printf("enter no of students");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        printf("enter roll");
        scanf("%d",&a[i].roll);
        printf("enter name");
        fflush(stdin);
        gets(a[i].name);
        for(s=0;s<5;s++)
        {
            printf("enter marks");
            scanf("%d",&a[i].marks[s]);
        }
    }    
     for(i=0;i<r;i++)
     {
        for(s=0;s<5;s++)
        {
           if(a[i].marks[s]<40)
           printf("%s",a[i].name);
           break;
        }

    }  
    return 0;
}