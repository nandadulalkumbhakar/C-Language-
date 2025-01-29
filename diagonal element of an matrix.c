#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the element of 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("1st matrix print\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
    }
    printf("diagonal matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(i==j || i+j==2)
                printf("%d\t",a[i][j]);
    }
    return 0;
}
