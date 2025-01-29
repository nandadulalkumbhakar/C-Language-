#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],f,r;

void insert(int x)
{
    if((f == 0 && r==max-1) || f==r+1)
    {
        printf("queue is full");
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
    if (f==-1)
    {
        printf("Queue is empty can't deletion.");
        return;
    }
    if(f==r)
    {
        f=r=-1;
    }
    else if(f==max-1)
    {
        f=0;
    }
    else
        f++;
}
void display()
{
    int i;
    if(f<=r)
    {
        for( i=f;i<=r;i++)
            printf("%d ",a[i]);
    }
    else
    {
        for(i=f;i<max;i++)
            printf("%d ",a[i]);
        for(i=0;i<=r;i++)
            printf("%d ",a[i]);
    }
}
void menu()
{
    printf("\n1. Insert\n");
    printf("2. Deletion\n");
    printf("3. Display\n");
    printf("4. exit\n");
    printf("Enter your choice: ");
}
int main()
{
    int n,ch;
    f=r=-1;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a number which you want to push: ");
            scanf("%d",&n);
            insert(n);
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid your choice. ");
            break;
        }
    }
}



