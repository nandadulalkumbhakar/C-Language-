#include<stdio.h>
typedef struct node
{
    int data;
    struct node *pre,*next;
}node;
node *head='\0';
void create()
{
    node *t,*h;
    int x;
    char a;
    do
    {
        printf("Enter a number which you want to insert: ");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->data=x;
        t->next=t->pre='\0';
        if(head=='\0')
        {
            head=t;
            head->pre=head->next='\0';
            h=head;
        }
        else
        {
            t->pre=h;
            t->next='\0';
            h->next=t;
            h=t;
        }
        printf("Do you want to continue(y/n): ");
        fflush(stdin);
        a=getchar();
    }while(a=='Y' || a=='y');

}
void display()
{
    if(head=='\0')
    {
        printf("The list is empty can't display. \n");
        return;
    }
    node*h=head;
    while(h!='\0')
    {
        printf("%d ",h->data);
        h=h->next;
    }
}
void insertFirst(int x)
{
    node *t=(node*)malloc(sizeof(node));
        t->data=x;
        t->next=t->pre='\0';
    if(head=='\0')
        head=t;
    else
    {
        t->next=head;
        head->pre=t;
        head=t;
    }
}
void rev()
{
    node *h;
    if(head=='\0')
    {
        printf("Double linked list is empty can't reverse. ");
        return;
    }
    if(head->next=='\0')
        printf("%d",head->data);
    else
    {
        h=head;
        while(h->next!='\0')
        {
            h=h->next;
        }
        while(h!='\0')
        {
            printf("%d ",h->data);
            h=h->pre;
        }
    }
}
node* search(int x)
{
    if(head=='\0')
    {
        printf("The list is empty.");
        return;
    }
    node *h=head;
    while(h!='\0')
    {
        if(h->data==x)
            return h;
        else
            h=h->next;
    }
    return '\0';
}
void deleteByValue(int x)
{
    node *p=search(x);
    if(p=='\0')
    {
        printf("Not found can't delete.");
        return;
    }
    if(p==head)
    {
        head=head->next;
        head->pre='\0';
        free(p);
        return;
    }
    p->pre->next=p->next;
    if(p->next != '\0')
    p->next->pre=p->pre;
    free(p);
}
int count()
{
    node *h=head;
    int c=0;
    while(h!='\0')
    {
        c++;
        h=h->next;
    }
    return c;
}
void delete_By_Position(int n)
{
    int p=count();
    if(n<1 || n>p )
    {
        printf("invalid Position, can't delete. ");
        return;
    }
     node *h;
    if(n==1)
    {
        h=head;
        head=head->next;
        head->pre='\0';
        free(h);
    }
    else
    {
        h=head;
        for(int i=1;i<n;i++)
        {
            h=h->next;
        }
        h->pre->next=h->next;
        if(h->next!='\0')
        h->next->pre=h->pre;
        free(h);
    }
}
void insertByPosition(int n,int x)
{
    int p=count();
    if(n<1 || n >p+1)
    {
        printf("Invalid position can't insert. ");
        return;
    }
    node *h;
    node *t=(node*)malloc(sizeof(node));
    t->data=x;
    t->pre='\0';
    t->next='\0';
    if(n==1)
    {
        t->next=head;
        if(head!='\0')
            head->pre=t;
        head=t;
    }
    else
    {
        h=head;
        for(int i=1;i<n-1;i++)
            h=h->next;
        t->next=h->next;
        t->pre=h;
        if(h->next !='\0')
            h->next->pre=t;
        h->next=t;
    }
}
void insertBeforeValue(int v,int x)
{
    node* t,*h;
    h=search(v);
    if(h=='\0')
    {
        printf("Invalid value can't insert. ");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->pre='\0';
    t->next='\0';
    if(h==head)
    {
        t->next=h;
        h->pre=t;
        head=t;
    }
    else
    {
        t->next=h;
        t->pre=h->pre;
        h->pre->next=t;
        h->pre=t;
    }
}
void insertAfterValue(int v,int x)
{
    node* t,*h;
    h=search(v);
    if(h=='\0')
    {
        printf("Invalid value can't insert. ");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->pre=h;
    t->next=h->next;
    if(h->next!='\0')
        h->next->pre=t;
    h->next=t;
}
int max()
{
    node *h=head;
    if(h=='\0')
    {
        printf("\ndouble linkedlist is empty. ");
        return;
    }
    int max=h->data;
    while(h!='\0')
    {
        if(max < h->data)
            max=h->data;
        h=h->next;
    }
    return max;
}
int main()
{
    int ch,x,n;
    while(1)
    {
        printf("\n1. create: \n");
        printf("2. Display\n");
        printf("3. Insert First\n");
        printf("4. Reverse \n");
        printf("5. delete by value\n");
        printf("6. Delete by position\n");
        printf("7. Insert by position\n");
        printf("8. Insert Before a value\n");
        printf("9. Insert After a value\n");
        printf("10. max\n");
        printf("11. exit\n");
        printf("Enter your choice: ");

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
            printf("Enter a number which you want to insert: ");
            scanf("%d",&x);
            insertFirst(x);
            break;
        case 4:
            rev();
            break;
        case 5:
            printf("Enter a no which you want to delete: ");
            scanf("%d",&x);
            deleteByValue(x);
            break;
        case 6:
            printf("Enter a index no which you want to delete: ");
            scanf("%d",&x);
            delete_By_Position(x);
            break;
        case 7:
            printf("Enter a index number where you want to insert: ");
            scanf("%d",&n);
            printf("Enter a number a which you want to insert: ");
            scanf("%d",&x);
            insertByPosition(n,x);
            break;
        case 8:
            printf("Enter a number where you want to insert: ");
            scanf("%d",&n);
            printf("Enter a number a which you want to insert: ");
            scanf("%d",&x);
            insertBeforeValue(n,x);
            break;
        case 9:
            printf("Enter a number where you want to insert: ");
            scanf("%d",&n);
            printf("Enter a number a which you want to insert: ");
            scanf("%d",&x);
            insertAfterValue(n,x);
            break;
        case 10:
            printf("%d",max());
            break;
        case 11:
            exit(0);
        default:
            printf("Invalid your choice.");
            break;
        }
    }
}
