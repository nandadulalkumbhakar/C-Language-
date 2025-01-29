#include<stdio.h>
#define max 5
int a[max],f,r;
void insertAtFront(int x,int n)
{
    if(n==max)
    {
        printf("The dequeue is full can't insert");
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
    {
            f--;
            a[f]=x;
    }
}
void insertAtRear(int x,int n)
{
    if(n==max)
    {
        printf("The dequeue is full can't insert.");
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
        r++;
        a[r]=x;
    }
}
void display()
{
    if(f==-1)
    {
        printf("The Dequeue is empty can't display");
        return;
    }
    int i;
    if(f>r)
    {
        for(i=f;i<max;i++)
            printf("%d ",a[i]);
        for(i=0;i<=r;i++)
            printf("%d ",a[i]);
    }
    else
    {
        for(i=f;i<=r;i++)
            printf("%d ",a[i]);
    }
}

void deletionAtFront()
{
    if(f==-1)
    {
        printf("The dequeue is empty.");
        return;
    }
    if(f==r)
        f=r=-1;
    else if(f==max-1)
        f=0;
    else
        f++;
}
void deletionAtRear()
{
    if(f==-1)
    {
        printf("The dequeue is empty.");
        return;
    }
    if(f==r)
        f=r=-1;
    else if(r==0)
        r=max-1;
    else
        r--;
}
int main()
{
    f=-1;r=-1;int n=0,ch,x;
    while(1)
    {
        printf("\n1. Insert At Front\n");
        printf("2. Insert At Rear\n");
        printf("3. Delete At Front\n");
        printf("4. Delete At Rear\n");
        printf("5. Display\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a number which you want to insert: ");
            scanf("%d",&x);
            insertAtFront(x,n);
            if(n<max)
            n++;
            break;
        case 2:
            printf("Enter a number which you want to insert: ");
            scanf("%d",&x);
            insertAtRear(x,n);
            if(n<max)
            n++;
            break;
        case 3:
            deletionAtFront();
            if(n>0)
                n--;
            break;
        case 4:
            deletionAtRear();
            if(n>0)
                n--;
            break;
        case 5:
            display();
            break;
        }
    }
}

