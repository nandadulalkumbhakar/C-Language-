#include<stdio.h>
#include<limits.h>
#define v 4
void warshall(int graph[][v])
{
      int disk[v][v];
      for(int i=0;i<v;i++)
      {
          for(int j=0;j<v;j++)
          {
              disk[i][j]=graph[i][j];
          }
      }
      for(int k=0;k<v;k++)
      {
          for(int i=0;i<v;i++)
          {
              for(int j=0;j<v;j++)
              {
                  if(disk[i][k]!=INT_MAX && disk[k][j]!=INT_MAX && disk[i][k]+disk[k][j]<disk[i][j])
                    disk[i][j]=disk[i][k]+disk[k][j];
              }
          }
      }
    print(disk);
}
void print(int disk[][v])
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(disk[i][j]==INT_MAX)
                printf("INF ");
            else
                printf(" %d ",disk[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int a[v][v]
    ={
    {0,3,INT_MAX,7},
    {8,0,2,INT_MAX},
    {5,INT_MAX,0,1},
    {2,INT_MAX,INT_MAX,0}
    };
    /*printf("Enter 4*4 matrix: ");
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }*/
    warshall(a);
}
