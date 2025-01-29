#include<stdio.h>
typedef struct BST
{
    int data;
    struct BST *rc,*lc;
    //struct BST *rc='\0';
}node;
node *root='\0',*loc='\0',*par='\0';

void search(int x)
{
    node *p,*q;

    if(root=='\0')
    {
        loc=par='\0';
        return;
    }
    if(root==x)
    {
        loc=root;
        par='\0';
        return;
    }
    if(root->data > x)
    {
        q=root;
        p=root->lc;
    }
    else
    {
        q=root;
        p=root->rc;
    }

    //loc=root;
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
    search(x);
    if(loc!='\0')
    {
        printf("Duplicate value can't insert");
        return;
    }
    node *t=(node*)malloc(sizeof(node));
    t->data=x;
    t->lc=t->rc='\0';
    if(par=='\0')
    {
        root=t;
        return;
    }
    if(par->data > x)
        par->lc=t;
    else
        par->rc=t;
}
void inOrderTraverse()
{
    node *p;
    int f=0,s[20],top=-1;
    if(root=='\0')
    {
        printf("\nTree is empty can't display\n");
        return;
    }
    p=root;
    while(p!='\0')
    {
        if(p->lc != '\0' && f==0)
        {
            s[++top]=p;
            p=p->lc;
        }
        else
        {
            printf("%4d",p->data);
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
void postOrder()
{
    if(root=='\0')
    {
        printf("The Tree is Empty.");
        return;
    }
    int n1=1,n2=1,top1=-1,top2=-1;
    node **s1,**s2,*p;
    s1=(node**)calloc(n1,sizeof(node));
    s2=(node**)calloc(n2,sizeof(node));
    s1[++top1]=root;
    n1++;
    s1=(node**)realloc(s1,n1*sizeof(node));
    while(top1 != -1)
    {
        p=s1[top1--];
        n1--;
        s1=(node**)realloc(s1,n1*sizeof(node));
        s2[++top2]=p;
        n2++;
        s2=(node**)realloc(s2,n2*sizeof(node));
        if(p->lc!='\0')
        {
            s1[++top1]=p->lc;
            n1++;
            s1=(node**)realloc(s1,n1*sizeof(node));
        }
        if(p->rc!='\0')
        {
            s1[++top1]=p->rc;
            n1++;
            s1=(node**)realloc(s1,n1*sizeof(node));
        }
    }
    while(top2!=-1)
    {
        p=s2[top2--];
        printf("%d ",p->data);
        n2--;
        s2=(node**)realloc(s2,n2*sizeof(node));
    }
    free(s1);
    free(s2);
}
void menu()
{
    printf("\n1. insert\n");
    printf("2. InOrder Traverse\n");
    printf("3. PostOrder Traverse\n");
    printf("Enter your choice: ");
}
int main()
{int x,ch;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a no: ");
            scanf("%d",&x);
            insert(x);
            break;
        case 2:
            inOrderTraverse();
            break;
        case 3:
            postOrder();
            break;
        default:
            printf("Invalid your choice");
        }
    }
}


