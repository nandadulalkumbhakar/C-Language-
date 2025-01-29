#include<stdio.h>
#include<limits.h>
#define n 4
void floydWarshall(int a[][n])
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //int p=a[i][k]+a[k][j];
                if(a[i][k]!=INT_MAX && a[k][j]!=INT_MAX && a[i][k]+a[k][j]<a[i][j])
                    a[i][j]=a[i][k]+a[k][j];
            }
        }
    }
    print(a);

}
void print(int a[][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==INT_MAX)
                printf("INF ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int a[n][n]={
    0,3,INT_MAX,7,
    8,0,2,INT_MAX,
    INT_MAX,INT_MAX,0,1,
    2,INT_MAX,INT_MAX,0};
    floydWarshall(a);
}
