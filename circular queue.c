#include<stdio.h>
int i,ch,n,f,r,max;
#define max 5
int a[max];
void add(int x)
{
    if((f==0&&r==max-1)||(f==r+1))
    {
        printf("The Queue is full, can't add any element");
    }
    else if(f==-1)
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
        r++;
        a[r]=x;
}
void deletion()
{
    if(f==-1)
        printf("The Queue is empty, can't delete any element");
    else if(f==r)
    f=r=-1;
    else if(f==max-1)
        f=0;
    else
        f++;
}
void display()
{
    if(f==-1)
        printf("The queue is empty can't display any no\n");
    else if(f<=r)
    {
        printf("The element are:-");
        for(i=f;i<=r;i++)
            printf("%4d",a[i]);
    }
    else
    {
        printf("The element are:-");
        for(i=f;i<=max-1;i++)
            printf("%4d",a[i]);
        for(i=0;i<=r;i++)
            printf("%4d",a[i]);
    }
}
void menu()
{
    printf("\n");
    printf("\t\t The option are:-\n");
    printf("\t\t\t 1. Addition\n");
    printf("\t\t\t 2. Deletion\n");
    printf("\t\t\t 3. Display\n");
    printf("\t\t\t 4. Exit\n");
    printf("Enter your choice:-");
}
int main()
{
    f=-1;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a no which you want to add:-");
            scanf("%d",&n);
            add(n);
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid your choice\n");
        }
    }
}
