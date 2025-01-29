#include<stdio.h>
int main()
{
    int n,i,j,u,v;
    char c;
    printf("Enter no. of vertex: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        a[i][j]=0;
    }

    do
    {
        printf("Enter no. of vertex and Edge where you want to link: ");
        scanf("%d%d",&v,&u);
        if(a[v-1][u-1]==1)
        {
            printf("Already exact");
            printf("Enter no. of vertex and Edge where you want to link: ");
            scanf("%d%d",&v,&u);
        }
        if(v<1 || v>n || u<1 || u>n || (v<1 && v<n) || (u<1 && u<n))
        {
            printf("\n invalid index\n");
            printf("Enter no. of vertex and Edge where you want to link: ");
            scanf("%d%d",&v,&u);
        }
        printf("Enter a no: ");
        scanf("%d",&a[v-1][u-1]);
        printf("Do you want to continue?(y/n)");
        fflush(stdin);
        c=getchar();
    }while(c=='y' || c=='Y');
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%4d",a[i][j]);
            printf("\n");
    }
    return 0;
}
