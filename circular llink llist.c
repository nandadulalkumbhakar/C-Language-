#include<stdio.h>
#include<stdlib.h>
struct circular_linklist
{
    int n;
    struct circular_linklist *next;
};
typedef struct circular_linklist node;
node *head='\0';
void create()
{
    int x;
    char a;
    node *t,*h;
    do
    {
        printf("Enter a no");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->n=x;
        if(head=='\0')
        {
            head=t;
            h=t;
            t->next=head;
        }
        else
        {
            h->next=t;
            h=t;
            h->next=head;
        }
        printf("Do you want to continue(y/n)");
        fflush(stdin);
        a=getchar();
        //scanf("%c",&a);
    }while(a=='Y' || a=='y');
}
void display()
{
    node *h;
    if(head=='\0')
    {
        printf("The list are empty, can't display");
    }
    else
    {
        h=head;
        do
        {
            printf("%4d",h->n);
            h=h->next;
        }while(h!=head);
    }
}
void deletion_by_position(int p)
{
    int i;
    int c=count();
    node *h1,*h2;
    if(head=='\0')
    {
        printf("The list is empty can't delete");
        return;
    }
    if(head->next==head)
    head=='\0';
    else
    {
        h1=head;
        h2=h1->next;
        for(i=1;i<=p-2;i++)
        {
            h1=h2;
            h2=h2->next;
        }
        h1->next=h2->next;
    }
}
int count()
{
    node *h;
    int c=0;
    if(head=='\0')
        return c;
    else
    {
        h=head;
        do
        {
            c=c+1;
            h=h->next;
        }while(h!=head);
        return c;
    }
}
void deletion_first()
{
    node *m,*h;
    if(head=='\0')
    {
        printf("The list is empty can't delete");
        return;
    }
    if(head->next==head)
    {
        head='\0';
        free(head);
    }
    else
    {
        h=head;
        m=head;
        while(m->next!=head)
        {
            m=m->next;
        }
        head=head->next;
        m->next=head;
        free(h);
    }
}
void deletion_last()
{
    node *h;
    h=head;
    while(h->next->next!=head)
    {
        h=h->next;
    }
    free(h->next);
    h->next=head;
}
void insert_last(int x)
{
    node *t,*h;
    t=(node*) malloc (sizeof (node));
    t->n=x;
    if(head=='\0')
    {
        head=t;
        t->next=head;
    }
    else
    {
        h=head;
        do
        {
            h=h->next;
        }while(h->next!=head);
        h->next=t;
        t->next=head;
    }
}
void menu()
{
    printf("\n");
    printf("1.create \n");
    printf("2.Display\n");
    printf("3.Delete by position\n");
    printf("4 count\n");
    printf("5 del_by _first\n");
    printf("6.del last\n");
    printf("7.insert last\n");
    printf("Enter your choice :-");
}
int main()
{
    int ch,p,x;
    while(1)
    {
        menu();
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
            printf("Enter a index no which you want to delete");
            scanf("%d",&p);
            deletion_by_position(p);
            break;
        case 4:
            count();
            printf("No of node:- ");
            printf("%d", count());
            break;
        case 5:
            deletion_first();
            break;
        case 6:
            deletion_last();
            break;
        case 7:
            printf("Enter a no");
            scanf("%d",&x);
            insert_last(x);
        }

    }
}
