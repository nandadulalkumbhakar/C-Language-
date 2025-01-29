#include<stdio.h>
#include<stdlib.h>
struct linklist_Insert
{
    int data;
    struct linklist_Insert *next;
};
typedef struct linklist_Insert node;
node *head='\0';
void create()
{
    int x;
    node *t,*h;
    char a;
    do
    {
        printf("Enter a no which you want to insert");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->data=x;
        t->next='\0';
        if(head=='\0')
        {
            head=t;
            h=t;
        }
        else
        {
            h->next=t;
            h=t;
        }
        printf("Do you want to continue");
        fflush(stdin);
        a=getchar();
    }while(a=='y' || a=='Y');
}
void display()
{
    node *h;
    if(head=='\0')
    {
        printf("list is empty can't display");
        return;
    }
    h=head;
    while(h!='\0')
    {
        printf("%4d",h->data);
        h=h->next;
    }
}
node *search(int x)
{
    node *h;
    if(head=='\0')
    {
        printf("Not fount, list is empty");
        return '\0';
    }
    h=head;
    while(h!='\0')
    {
        if(h->data==x)
        {
            return h;
        }
        else
            h=h->next;
    }
    return '\0';
}
void del_By_Value()
{
    int x;
    node *p,*h1,*h2;
    printf("Enter a no which you want to delete:");
    scanf("%d",&x);
    p=search(x);
    if(p=='\0')
    {
        printf("Not found can't delete");
        return ;
    }
    h1=head;
    h2=h1->next;
    while(h2->data!=x)
    {
        h1=h2;
        h2=h2->next;
    }
    h1->next=h2->next;
    free(h2);
}
void del_Beginning()
{
    node *h;
    if(head=='\0')
    {
        printf("List is Empty can't delete");
        return ;
    }
    h=head;
    head=head->next;
    free(h);
}
void del_Before_a_Value()
{
    int x;
    node *h1,*h2,*h3,*p;
    printf("Enter a no ");
    scanf("%d",&x);
    p=search(x);
    if(p=='\0')
    {
        printf("Not found can't delete");
        return;
    }
    if(head=='\0')
    {
        printf("List is Empty can't delete");
        return ;
    }
    if(head->next=='\0')
    {
        printf("list has only one element so can't delete");
        return;
    }
    h1=head;
    h2=h1->next;
    if(h2->data==x)
    {
        head=h2;
        free(h1);
        return;
    }
    h3=h2->next;
    while(h3->data!=x)
    {
        h1=h2;
        h2=h3;
        h3=h3->next;
    }
    h1->next=h3;
    free(h2);
}
void del_After_a_Value()
{
    node *p,*h1,*h2;
    int x;
    printf("Enter a no which you want to delete:");
    scanf("%d",&x);
    p=search(x);
    if(p=='\0')
    {
        printf("Not found can't delete");
        return;
    }
    if(head=='\0')
    {
        printf("List is Empty can't delete");
        return ;
    }
    if(head->next=='\0')
    {
        printf("list has only one element so can't delete");
        return;
    }
    if(head->data==x)
    {
        if(h2->next=='\0')
        {
            head->next='\0';
        }
        return;
    }
    h1=head;
    h2=h1->next;
    while(h2->data!=x)
    {
        h1=h2;
        h2=h2->data;
    }
    h1->next=h2->next;
    free(h2);
}
void menu()
{
    printf("\nThe option are\n");
    printf("1. Create\n");
    printf("2. Display\n");
    printf("3. Delete by value\n");
    printf("4. Delete beginning\n");
    printf("5. Delete before a value\n");
    printf("6. Delete after a value\n");//X
    printf("Enter your choice:");
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
            del_By_Value();
            break;
        case 4:
            del_Beginning();
            break;
        case 5:
            del_Before_a_Value();
            break;
        case 6:
            del_After_a_Value();
            break;
        default:
            printf("Invalid your choice");
            break;
        }
    }
}
