#include<stdio.h>
#include<stdlib.h>
struct bst
{
    int data;
    struct bst *lc,*rc;
};
typedef struct bst node;
node *root='\0',*ptr,*par;
node* search(int x)
{
    if(root=='\0')
    {
        par=ptr='\0';
        return;
    }
    if(root->data==x)
    {
        ptr=root;
        par='\0';
        return;
    }
    if(root->data >x)
        ptr=root->lc;
    else
        ptr=root->rc;
    par=root;
    while(ptr!='\0')
    {
        if(ptr->data==x)
        {
            return;
        }
        if(ptr->data > x)
        {
            par=ptr;
            ptr=ptr->lc;
        }
        else
        {
            par=ptr;
            ptr=ptr->rc;
        }
    }
    ptr='\0';

}
void insert(int x)
{
    search(x);
    if(ptr!='\0')
    {
        printf("Duplicate value.");
        return;
    }
    node *t=(node*)malloc(sizeof(node));
    t->data=x;
    t->lc=t->rc='\0';
    if(root=='\0')
    {
        root=t;
        return;
    }
    if(par->data>x)
    {
        par->lc=t;
    }
    else
        par->rc=t;
}
void inOrder()
{
    int s[50],top=-1,f=0;
    if(root=='\0')
    {
        printf("Empty");
        return;
    }
    //s[++top]='\0';
    node *p=root;
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
int main()
{
    int ch,n;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. InOrder\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter a number: ");
            scanf("%d",&n);
            insert(n);
            break;
        case 2:
            inOrder();
            break;
        }
    }
}
