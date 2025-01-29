#include<stdio.h>
//#include<stdlib.h>
#define max 5
int a[max],f,r;
void insert(int x)
{
    if((f==0 && r==max-1) || (f==r+1))
    {
        printf("circular Queue is full can't insert. ");
        return;
    }
    if(f==-1)
    {
        f=r=0;
        a[r]=x;
    }
    else if(r==max-1)
    {
        r=0;
        a[r]=x;
    }
    else
        a[++r]=x;
}
void deletion()
{
    if(f==-1)
    {
        printf("Circular queue is empty can't delete. ");
        return ;
    }
    if(f==r)
    {
        f=r=-1;
    }
    else if(f==max-1)
        f=0;
    else
        f++;
}
void display()
{
    printf("\n");
    if(f==-1)
    {
        printf("Circular queue is empty, can't display. ");
        return;
    }
    if(f<=r)
    {
        for(int i=f;i<=r;i++)
            printf("%d ",a[i]);
    }
    else
    {
        for(int i=f;i<=max-1;i++)
            printf("%d ",a[i]);
        for(int i=0;i<=r;i++)
            printf("%d ",a[i]);
    }
}
void menu()
{
    printf("\nThe option are:- \n");
    printf("1. Insert\n");
    printf("2. deletion\n");
    printf("3. display\n");
    printf("Enter your choice: ");
}
int main()
{
    int ch,x;
    f=-1;
    r=-1;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a number : ");
            scanf("%d",&x);
            insert(x);
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        }
    }
}
