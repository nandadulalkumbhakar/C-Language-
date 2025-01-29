#include<stdio.h>
#include<stdlib.h>
struct doubleLinkList
{
    struct doubleLinkList *pre;
    int data;
    struct doubleLinkList *next;
};
typedef struct doubleLinkList node;
node *head='\0';
void create()
{
    int x;
    char a;
    node *h,*t;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->data=x;
        t->pre='\0';
        t->next='\0';
        if(head=='\0')
        {
            head=t;
            h=t;
        }
        else
        {
            t->pre=h;
            h->next=t;
            h=t;
        }
        printf("Do you want to continue(y/n)?");
        fflush(stdin);
        a=getchar();
    }while(a=='Y' || a=='y');
}
void display()
{
    node *h=head;
    if(h=='\0')
    {
        printf("Empty.");
        return;
    }
    while(h!='\0')
    {
        printf("%d ",h->data);
        h=h->next;
    }
}
void delByValue(int x)
{
    node *h=head;
    if(head=='\0')
    {
        printf("Not found");
    }
    if(head->data==x)
    {
        head=head->next;
        head->pre='\0';
        free(h);
        return;
    }
    while(h!='\0')
    {
        if(h->data==x)
            break;
        else
            h=h->next;
    }
    if(h=='\0')
    {
        printf("not found");
        return;
    }
    else
    {
        h->pre->next=h->next;
        free(h);
    }
}
int main()
{
    int ch,x;
    while(1)
    {
        printf("\n1. creation\n");
        printf("2. Display\n");
        printf("3. Delete by value\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter a number which you want to delete: ");
            scanf("%d",&x);
            delByValue(x);
            break;
        default:
            printf("Invalid your choice. ");
            break;
        }
    }
}
