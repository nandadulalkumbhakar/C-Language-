#include<stdio.h>
#include<limits.h>
#define v 4
void floydWarshall(int a[][v])
{
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(a[i][k]!=INT_MAX && a[k][j]!=INT_MAX && a[i][k]+a[k][j]<a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(a[i][j]==INT_MAX)
                printf("INT");
            else
                printf(" %d ",a[i][j]);
        }
            //printf("%d ",a[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[v][v]={
    {0, 5, INT_MAX, 10},
        {INT_MAX, 0, 3, INT_MAX},
        {INT_MAX, INT_MAX, 0, 1},
        {INT_MAX, INT_MAX, INT_MAX, 0}
    };
    floydWarshall(a);
}
