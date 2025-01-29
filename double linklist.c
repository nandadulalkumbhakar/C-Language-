#include<stdio.h>
struct double_list
{
    int n;
    struct double_list *next;
    struct double_list *prev;
};
typedef struct double_list node;
node *head='\0';
void create()
{
    int x;
    node *h,*t;
    char a;
    do
    {
        printf("Enter a no which you want to insert");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->n=x;
        t->next='\0';
        if(head=='\0')
        {
            head=t;
            h=t;
            h->prev='\0';
        }
        else
        {
            t->prev=h;
            h->next=t;
            h=t;
        }
        printf("Do you want to continue?(y/n)");
        fflush(stdin);
        a=getchar();
    }while(a=='Y' || a=='y');
}
void display()
{
    node *h;
    int x;
    if(head=='\0')
    {
        printf("list are empty, can't display");
        return;
    }
    h=head;
    while(h!='\0')
    {
        printf("%4d",h->n);
        h=h->next;
    }
}
node* search(int x)
{
    node *h=head;
    while(h!='\0')
    {
        if(h->n==x)
            return h;
        else
            h=h->next;
    }
        return '\0';
}
void deletion_By_Value(int x)
{
    node *h;
    h=search(x);
    if(h=='\0')
    {
        printf("Not found, can't delete");
        return;
    }
    if(h==head)
    {
        head=head->next;
        head->prev='\0';
    }
    else
    {
        h->prev->next=h->next;
        if(h->next!='\0')
        h->next->prev=h->prev;
    }
    free(h);
}
void delete_By_Position(int p)
{
    node *h;
    int i,c=count();
    if(p<1 || p>c)
    {
        printf("Invalid index can't delete");
        return ;
    }
    if(p==1)
    {
        h=head;
        head=h->next;
        head->prev='\0';
        free(h);
    }
    else
    {
        h=head;
        for(i=1;i<p;i++)
        {
            h=h->next;
        }
        h->prev->next=h->next;
        if(h->next!='\0')
            h->next->prev=h->prev;
            free(h);
    }
    printf("%d",h);
}
void insert_Before(int x, int a)
{
    node *t,*p=search(x);
    if(p=='\0')
    {
        printf("Not found can't insert a number");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->n=a;
    if(head==p)
    {
        t->next=head;
        t->prev='\0';
        head->prev=t;
        head=t;
    }
    else
    {
        t->next=p;
        t->prev=p->prev;
        p->prev->next=t;
        p->prev=t;
    }
}
void insert_After(int x,int a)
{
    node *t,*p=search(x);
    if(p=='\0')
    {
        printf("Not found ,can't insert");
        return ;
    }
    t=(node*)malloc(sizeof(node));
    t->n=a;
    t->prev=p;
    t->next=p->next;
    if(p->next!='\0')
        p->next->prev=t;
    p->next=t;
}
void insert_By_Position(int p,int x)
{
    node *t,*h;
    int i, c=count();
    if(p<1 || p>c+1)
    {
        printf("invalid position");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->n=x;
    if(p==1)
    {
        t->next=head;
        t->prev='\0';
        head->prev=t;
        head=t;
    }
    else
    {
        h=head;
        for(i=1;i<p-1;i++)
        {
            h=h->next;
        }
        t->next=h->next;
        t->prev=h;
        if(h->next!='\0')
        h->next->prev=t;
        h->next=t;
    }
}
int count()
{
    int c=0;
    node *h=head;
    while(h!='\0')
    {
        c=c+1;
        h=h->next;
    }
    return c;
}
void rev()
{
    node *h;
    h=head;
    while(h->next!='\0')
    {
		h=h->next;
	}
	do
    {
        printf("%4d",h->n);
        h=h->prev;
    }while(h!='\0');
}
void menu()
{
    printf("\n");
    printf("1.Create\n");
    printf("2.Display\n");
    printf("3.Search\n");
    printf("4.count\n");
    printf("5.delete by value\n");
    printf("6.delete by position\n");
    printf("7.Insert Before a no\n");
    printf("8.Insert After a no\n");
    printf("9.Insert by position\n");
    printf("10.reverse\n");
    printf("Enter your choice:- ");
}
int main()
{
    node *h;
    int ch,n,x;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                create();
                break;
            }
        case 2:
            {
                display();
                break;
            }
        case 3:
            {
                printf("Enter a no which you want to search");
                scanf("%d",&n);
                h=search(n);
                if(h=='\0')
                    printf("Not found");
                else
                    printf("%d is found",n);
                break;
            }
        case 4:
            {
                n=count();
                printf(" No of node %d",n);
                break;
            }
        case 5:
            {
                printf("Enter a no which you want to delete");
                scanf("%d",&n);
                deletion_By_Value(n);
                break;
            }
        case 6:
            {
                printf("Enter a index no, which you want to delete");
                scanf("%d",&n);
                delete_By_Position(n);
                break;
            }
        case 7:
            {
                printf("Enter a no where you want to insert");
                scanf("%d",&n);
                printf("Enter a no which you want to insert");
                scanf("%d",&x);
                insert_Before(n,x);
                break;
            }
        case 8:
            {
                printf("Enter a no where you want to insert");
                scanf("%d",&n);
                printf("Enter a no which you want to insert");
                scanf("%d",&x);
                insert_After(n,x);
                break;
            }
        case 9:
            {
                printf("Enter a position where you want to insert:- ");
                scanf("%d",&n);
                printf("Enter a no which you want to insert:- ");
                scanf("%d",&x);
                insert_By_Position(n,x);
                break;
            }
        case 10:
            {
                rev();
                break;
            }
        default:
            {
                printf("Invalid choice");
                break;
            }
        }
    }
}
