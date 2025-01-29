#include<stdio.h>
#include<stdlib.h>
struct bst
{
    int data;
    struct bst *lc,*rc;
};
typedef struct bst node;
node *par='\0',*loc='\0',*root='\0';
void search(int x)
{
    node *p,*q;
    if(root=='\0')
    {
        par=loc='\0';
        return;
    }
    if(root->data==x)
    {
        loc=root;
        par='\0';
        return;
    }
    if(root->data>x)
    {
        p=root->lc;
        q=root;
    }
    else
    {
        p=root->rc;
        q=root;
    }
    while(p!='\0')
    {
        if(p->data==x)
        {
            loc=p;
            par=root;
            return;
        }
        if(p->data > x)
        {
            q=p;
            p=p->lc;
        }
        else
        {
            q=p;
            p=p->rc;
        }
    }
    loc='\0';
    par=q;
}
void insert(int x)
{
    node *t;
    search(x);
    if(loc!='\0')
    {
        printf("Already exist, can't insert Duplicate value");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->lc=t->rc='\0';
    if(par=='\0')
    {
        root=t;
        return;
    }
    if(par->data >x)
    {
        par->lc=t;
    }
    else
    {
        par->rc=t;
    }
}
void inOrder()
{
    node *p=root;
    int f=0,s[100],top=-1;
    if(p=='\0')
    {
        printf("The tree is empty, can't display. ");
        return ;
    }
    while(p!='\0')
    {
        if(p->lc!='\0' && f==0)
        {
            s[++top]=p;
            p=p->lc;
        }
        else
        {
            printf("%d ",p->data);
            if(p->rc!='\0')
            {
                p=p->rc;
                f=0;
            }
            else
            {
                p=s[top--];
                f=1;
            }
        }
    }
}
void preOrder()
{
    if(root=='\0')
    {
        printf("The tree is empty, can't display. ");
        return;
    }
    node *p=root;
    int s[100],top=-1;
    s[++top]='\0';
    while(p!='\0')
    {
        printf("%d ",p->data);
        if(p->rc!='\0')
        {
            s[++top]=p->rc;
        }
        if(p->lc!='\0')
        {
            p=p->lc;
        }
        else
        {
            p=s[top--];
        }
    }
}
int main()
{
    int x,ch;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. inOrder\n");
        printf("3. PreOrder\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a number which you want to insert: ");
            scanf("%d",&x);
            insert(x);
            break;
        case 2:
            inOrder();
            break;
        case 3:
            preOrder();
            break;
        }
    }
    return 0;
}
