#include<stdio.h>
#include<limits.h>
#define v 4
void floydWarshall(int g[][v])
{
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(g[i][k]!=INT_MAX && g[k][j]!=INT_MAX && g[i][k]+g[k][j]<g[i][j])
                {
                    g[i][j]=g[i][k]+g[k][j];
                }
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(g[i][j]==INT_MAX)
                printf("INT\t");
            else
                printf("%d\t",g[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int g[v][v]={
    0,3,INT_MAX,7,
    8,0,2,INT_MAX,
    5,INT_MAX,0,1,
    2,INT_MAX,INT_MAX,0
    };
    floydWarshall(g);
}
