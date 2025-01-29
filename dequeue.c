#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 5
int f,r,a[max];
void insertAtFront(int x,int n)
{
    if(n==max)
    {
        printf("Dequeue if full can't insert.");
        return;
    }
    if(f==-1)
    {
        f=r=max-1;
        a[f]=x;
    }
    else if(f==0)
    {
        f=max-1;
        a[f]=x;
    }
    else
        a[--f]=x;
}
void delAtRear()
{
    if(f==-1)
    {
        printf("The dequeue is empty, can't delete any element\n");
        return;
    }
    if(f==r)
    {
        f=-1;
    }
    else if(r==0)
    {
        r=max-1;
    }
    else
        r--;
}
void insertAtRear(int x)
{
    if((f==0 && r==max-1) || (f==r+1))
    {
        printf("Dequeue is full can't insert. ");
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
    {
        a[++r]=x;
    }
}
void delAtFront()
{
    if(f==-1)
    {
        printf("Dequeue is empty can't delete.");
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
    {
        f++;
    }
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
void menu()
{
    printf("\n1. Insert at Front\n");
    printf("2. Insert at Rear\n");
    printf("3. Deletion at Front\n");
    printf("4. Deletion at Rear\n");
    printf("5. Display\n");
    printf("6. Exit");
    printf("Enter your choice: ");
}
int main()
{
    f=r=-1;
    int x=0;
    int n,ch;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a number which you want to insert: ");
            scanf("%d",&n);
            insertAtFront(n,x);
            if(x<max)
                x++;
            break;
        case 2:
            printf("Enter a number which you want to insert: ");
            scanf("%d",&n);
            insertAtRear(n);
            if(x<max)
                x++;
            break;
        case 3:
            delAtFront();
            if(x>0)
                x--;
            break;
        case 4:
            delAtRear();
            if(x>0)
                x--;
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid your choice .");
            break;
        }
    }
}
