#include<stdio.h>
struct circularLinklist
{
    int data;
    struct circularLinklist *next
};
typedef struct circularLinklist node;
node *head='\0';
void create()
{
    node *t,*h;
    int x;
    char a;
    do
    {
        printf("Enter a no:");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->data=x;
        if(head=='\0')
        {
            head=t;
            h=t;
            h->next=head;
        }
        else
        {
            h->next=t;
            h=t;
            h->next=head;
        }
        printf("Do you want to continue?(Y/N):");
        fflush(stdin);
        a=getchar();
    }while(a=='Y' || a=='y');
}
void display()
{
    node *h=head;
    do
    {
        printf("%4d",h->data);
        h=h->next;
    }while(h!=head);
}
void insert_beg()
{
    int x;
    node *h,*t;
    printf("Enter a no: ");
    scanf("%d",&x);
    t=(node*)malloc(sizeof(node));
    t->data=x;
    if(head=='\0')
    {
        head=t;
        h=t;
        h->next=head;
    }
    else
    {
        h=head;
        while(h->next!=head)
        {
            h=h->next;
        }
        t->next=head;
        head=t;
        h->next=head;
    }
}
void insert_End()
{
    int x;
    node *h,*t;
    printf("Enter a no: ");
    scanf("%d",&x);
    t=(node*)malloc(sizeof(node));
    t->data=x;
    if(head=='\0')
    {
        head=t;
        h=t;
        h->next=head;
    }
    else
    {
        h=head;
        while(h->next!=head)
        {
            h=h->next;
        }
        h->next=t;
        t->next=head;
    }
}
void del_Beg()
{
    if(head=='\0')
    {
        printf("empty can't delete");
        return;
    }
}
void menu()
{
    printf("\n1. create\n");
    printf("2. display\n");
    printf("3. insert beginning\n");
    printf("4. insert end\n");
    printf("Enter your choice:");
}
int main()
{
    int ch;
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
            insert_beg();
            break;
        case 4:
            insert_End();
            break;
        }
    }
}
