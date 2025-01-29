#include<stdio.h>
#include<limits.h>
//int V 3
void floydWarshall(int V,int a[V][V])
{
    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(a[i][k]!=INT_MAX && a[k][j] != INT_MAX && a[i][k]+a[k][j]<a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }
    //printf("1");
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(a[i][j]==INT_MAX)
                printf("INF\t");
            else
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the number :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    floydWarshall(n,a);
}
