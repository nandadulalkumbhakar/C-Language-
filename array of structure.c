#include<stdio.h>
struct student
{
    int roll;
    float marks;
    char name[30];
};
void main()
{
    int i;
    struct student s[3];
    printf("\n Enter student records");
    for(i=0;i<3;i++)
    {
        printf("\n Enter the roll:");
        scanf("%d",&s[i].roll);
        printf("\n Enter the marks");
        scanf("%f",&s[i].marks);
        printf("\n Enter the name:");
        scanf("%s",&s[i].name);
    }
        //scanf("%D%s%d",&s.x.dd,&s.x.mm,&s.x.yy);
    for(i=0;i<3;i++)
    {
        printf("\n The roll is %d",s[i].roll);
        printf("\nThe marks is %.2f",s[i].marks);
        printf("\n The name is %s",s[i].name);
    }
}
