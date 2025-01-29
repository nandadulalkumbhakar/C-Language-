#include<stdio.h>
#include<stdlib.h>
struct node1{
    struct node1 *pre;
    int data1;
    struct node1 *next;
};
typedef struct node1 node1;
node1 *head1='\0';

struct node2{
    int data2;
    struct node2 *next2;
};
typedef struct node2 node2;
node2 *head2;

node2* insertEdge()
{
    char c;
    int x;
    head2='\0';
    node2 *p,*q;
    do
    {
        printf("Enter a edge: ");
        scanf("%d",&x);
        p=(node2*)malloc(sizeof(node2));
        p->data2=x;
        p->next2='\0';
        if(head2=='\0')
        {
            head2=p;
            q=p;
        }
        else
        {
            q->next2=p;
            q=p;
        }
        printf("\nDo you want to insert any edges?(y/n): ");
        fflush(stdin);
        c=getchar();
    }while(c=='y' || c=='Y');
    return head2;
}

void insertVertex(int x)
{
    char a;
    node1 *t,*h;

    t=(node1*)malloc(sizeof(node1));
    t->data1=x;
    t->pre='\0';
    t->next='\0';

    printf("\nDo you want to insert any edges?(y/n): ");
    fflush(stdin);
    a=getchar();
    if(a=='y' || a=='Y')
    {
        insertEdge();
        t->pre=head2;
    }
    /*else
    {
        t->pre='\0';
    }*/
    if(head1=='\0')
    {
        head1=t;
        h=t;
    }
    else
    {
        h->next=t;
        h=t;
    }

}

void display()
{
    if(head1=='\0')
    {
        printf("list is empty. ");
        return;
    }
    node1 *h1=head1;
    node2 *h2;
    while(h1!='\0')
    {
        printf("%d ",h1->data1);
        h2=h1->pre;
        while(h2!='\0')
        {
            printf("%d ",h2->data2);
            h2=h2->next2;
        }
        h1=h1->next;
    }
}
int main()
{
    int x,ch;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. Display\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a vertex: ");
            scanf("%d",&x);
            insertVertex(x);
            break;
        case 2:
            display();
            break;
        }
    }
}
