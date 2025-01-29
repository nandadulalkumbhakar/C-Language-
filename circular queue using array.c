#include<stdio.h>
#define max 5
int a[max],f,r;
void insert()
{
    int x;
    if((f==0 && r==max-1)||(f==r+1))
    {
        printf("The queue is full");
        return;
    }
    printf("Enter a no : ");
    scanf("%d",&x);
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
void deletion()
{
    if(f==-1)
    {
        printf("Empty");
        return;
    }
    if(f==r)
    {
        f=r=-1;
        return;
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
            printf("%4d",a[i]);
    }
    else
    {
        for(i=f;i<=max-1;i++)
            printf("%4d",a[i]);
        for(i=0;i<r;i++);
            printf("%4d",a[i]);
    }
}
void menu()
{
    printf("\nThe option are:\n");
    printf("1. insert\n");
    printf("2. display\n");
    printf("3. deletion\n");
    printf("Enter your choice: ");

}
int main()
{
    f=-1;
    int ch;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            deletion();
            break;
        }
    }
}
