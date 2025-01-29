#include<stdio.h>
int main()
{
    int phy,che,math,cs,total;
    double per;
    printf("Enter 4 no\n");
    printf("1.phy 2.che 3.math 4.cs");
    scanf("%d%d%d%d",&phy,&che,&math,&cs);
    total=phy+che+math+cs;
    printf("total=%d\n",total);
    per=(double)total/4;
    printf("per=%lf\n",per);
    if(per>=90&& per<=100)
        printf("Grade O");
    else if(per>=80&& per<=89)
        printf("Grade E");
    else if(per>=70&& per<=79)
        printf("Grade A");
    else if(per>=60&& per<=69)
        printf("Grade B");
    else if(per>=50&& per<=590)
        printf("Grade c");
    else if(per>=40&& per<=49)
        printf("Grade D");
    else
        printf("fail");
        return 0;
}
