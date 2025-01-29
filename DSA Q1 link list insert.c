#include<stdio.h>
#include<stdlib.h>
struct linklist_Insert
{
    int data;
    struct linklist_Insert *next;
};
typedef struct linklist_Insert node;
node *head='\0';
/*void create()
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
        //fflush(stdin);
    }while(a=='y' || a=='Y');
}*/
void insert_Beginning()
{
    int x;
    node *h,*t;
    printf("Enter a no which you want to insert");
    scanf("%d",&x);
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->next='\0';
    if(head=='\0')
    {
        head=t;
        //h=t;
    }
    else
    {
        t->next=head;
        head=t;
    }
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
void insert_After_Value(int p,int x)
{
    node *h,*t;
    h=search(p);
    if(h=='\0')
    {
        printf("can't insert");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->next=h->next;
    h->next=t;
}
void insert_before_value(int p,int x)
{
    node *h,*h1,*h2,*t;
    h=search(p);
    if(p=='\0')
    {
        printf("Not found can't insert");
        return;
    }
    h1=head;
    h2=h1->next;
    while(h2->data!=p)
    {
        h1=h2;
        h2=h2->next;
    }
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->next=h2;
    h1->next=t;
}
void insert_end()
{
    node *t,*h;
    int x;
    printf("Enter a no which you want to insert:");
    scanf("%d",&x);
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->next='\0';
    if(head=='\0')
    {
        head=t;
        return;
    }
        h=head;
        while(h->next!='\0')
        {
            h=h->next;
        }
        h->next=t;
}
void menu()
{
    printf("\nThe option are\n");
   // printf("1. Create\n");
    printf("2. Display\n");
    printf("3. insert beginning\n");
    printf("4. insert after a value\n");
    printf("5. insert before a value\n");
    printf("6. insert end\n");
    printf("Enter your choice: ");
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
            //create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_Beginning();
            break;
        case 4:
            printf("Enter a no where you want to insert:");
            scanf("%d",&p);
            printf("Enter a no which you want to insert:");
            scanf("%d",&x);
            insert_After_Value(p,x);
            break;
        case 5:
            printf("Enter a no where you want to insert:");
            scanf("%d",&p);
            printf("Enter a no which you want to insert:");
            scanf("%d",&x);
            insert_before_value(p,x);
            break;
        case 6:
            insert_end();
            break;
        default:
            printf("Invalid your choice");
            break;
        }
    }
}
