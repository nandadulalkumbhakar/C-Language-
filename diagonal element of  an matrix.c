#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter the element of an matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
     printf("matrix print\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Diagonal element of an matrix are\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    if(i==j||i+j==2)
        printf("%d\t",a[i][j]);
    }

    return 0;
}
