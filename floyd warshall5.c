#include<stdio.h>
#include<limits.h>
#define v 3
void floydWarshall(int graph[v][v])
{
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                int p=graph[i][k]+graph[k][j];
                if(graph[i][j]>p)
                {
                    graph[i][j]=p;
                }
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
            printf("%d ",graph[i][j]);
        printf("\n");
    }
}
int main()
{
    int graph[v][v]={17,2,30,4,50,6,7,8,9};
    floydWarshall(graph);
}

