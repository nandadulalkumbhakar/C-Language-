#include<stdio.h>
#define max 5
int a[max],f,r;
void insert(int x)
{
    if((f==0 && r==max-1) || (f==r+1))
    {
        printf("Full");
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
void del()
{
    if(f==-1)
    {
        printf("Empty");
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
    if(f==-1)
    {
        printf("Empty");
        return;
    }
    if(f<=r)
    {
        for(i=f;i<=r;i++)
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
int main()
{
    f=r=-1;
    int n,ch;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a number which you want to insert: ");
            scanf("%d",&n);
            insert(n);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        }
    }
}
