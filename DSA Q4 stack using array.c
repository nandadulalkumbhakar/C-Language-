#include<stdio.h>
#include<stdlib.h>
#define max 10
int top,a[max];
void push(int x)
{
    if(top==max-1)
    {
        printf("The stack is full,can't push");
        return;
    }
    a[++top]=x;
}
void pop()
{
    if(top==-1)
    {
        printf("The stack is empty can't pop");
        return;
    }
    printf("Deletion element is %d",a[top]);
    top--;
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("The stack is empty can't display");
        return;
    }
    printf("stack element are:");
    for(i=0;i<=top;i++)
        printf("%4d",a[i]);
}
void menu()
{
    printf("\n1.push\n");
    printf("2 pop\n");
    printf("3.Display\n");
    printf("Enter your choice:");
}
int main()
{
    int ch,n;
    top=-1;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a no which you want to push:");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }
}
