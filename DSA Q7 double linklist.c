#include<stdio.h>
#include<stdlib.h>
struct doubleLinklist
{
    int data;
    struct doubleLinklist *prev,*next;
};
typedef struct doubleLinklist node;
node *head='\0';
void create()
{
    int x;
    node *h,*t;
    char a;
    do
    {
        printf("Enter a no which you want to insert:");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->data=x;
        t->prev='\0';
        t->next='\0';
        if(head=='\0')
        {
            head=t;
            h=t;
        }
        else
        {
            h->next=t;
            t->prev=h;
            h=t;
        }
        printf("Do you want to continue?(y/n)");
        fflush(stdin);
        a=getchar();
    }while(a=='y' || a=='Y');
}
void insertBeginning()
{
    int x;
    node *h,*t;
    printf("Enter a no which you want to insert:");
    scanf("%d",&x);
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->prev='\0';
    t->next='\0';
    if(head=='\0')
    {
        head=t;
        h=t;
    }
    else
    {
        t->next=head;
        head->prev=t;
        head=t;
        h=t;
    }
}
void displayForward()
{
    if(head=='\0')
    {
        printf("list is empty can't display");
        return;
    }
    node *h=head;
    while(h!='\0')
    {
        printf("%4d",h->data);
        h=h->next;
    }
}
void insertEnd()
{
    int x;
    node *h,*t;
    printf("Enter a no which you want to insert:");
    scanf("%d",&x);
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->prev='\0';
    t->next='\0';
    if(head=='\0')
    {
        head=t;
        h=t;
    }
    else
    {
        h=head;
        while(h->next!='\0')
            h=h->next;
        h->next=t;
        t->prev=h;
    }
}
void delBeginning()
{
    node *h;
    if(head=='\0')
    {
        printf("list is empty can't delete");
        return;
    }
    if(head->next=='\0')
    {
        head='\0';
        return;
    }
    h=head;
    head=head->next;
    head->prev='\0';
    free(h);
}
void delEnd()
{
    node *h;
    if(head=='\0')
    {
        printf("list is empty can't delete");
        return;
    }
    if(head->next=='\0')
    {
        head='\0';
        return;
    }
    h=head;
    while(h->next!='\0')
    {
        h=h->next;
    }
    h->prev->next='\0';
    free(h);
}
void displayBackward()
{
    node *h;
    h=head;
    while(h->next!='\0')
    {
        h=h->next;
    }
    //head=h;
    while(h!='\0')
    {
        printf("%4d",h->data);
        h=h->prev;
    }
}
void menu()
{
    printf("\nThe option are\n");
    printf("1. create\n");
    printf("2. display forward\n");
    printf("3. insert beginning\n");
    printf("4. insert end\n");
    printf("5. delete beginning\n");
    printf("6. delete end\n");
    printf("7. display backward\n");
    printf("enter your choice:");
}
int main()
{
    int n,ch;
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
            displayForward();
            break;
        case 3:
            insertBeginning();
            break;
        case 4:
            insertEnd();
            break;
        case 5:
            delBeginning();
            break;
        case 6:
            delEnd();
            break;
        case 7:
            displayBackward();
            break;
        default:
            printf("invalid your choice:");
            break;
        }
    }
}
