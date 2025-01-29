#include<stdio.h>
#include<stdlib.h>
struct BST
{
    int data;
    struct BST *lc,*rc;
};
typedef struct BST node;
node *par='\0',*loc='\0',*root='\0';
node* search(int x)
{
    node *p,*q;
    if(root=='\0')//tree is empty
    {
        par=loc='\0';
        return;
    }
    if(root->data==x)//root element
    {
        loc =root;
        par='\0';
        return ;
    }
    if(root->data > x)
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
        if(p->data == x)
        {
            loc=p;
            par=root;//par=q
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
        printf("duplicate value can't insert");
        return;
    }
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->lc=t->rc='\0';
    if(par=='\0')//empty
    {
        root=t;
        return;
    }
    if(x < par->data)
    {
        par->lc=t;
    }
    else
    {
        par->rc=t;
    }
}
void pre_Order()
{
    node *p=root;
    int top=-1,s[50];
    if(root=='\0')
    {
        printf("The tree is Empty");
        return;
    }
    //top++;
    s[++top]='\0';
    while(p!='\0')
    {
        printf("%4d",p->data);
        if(p->rc!='\0')
        {
            //top++;
            s[++top]=p->rc;
        }
        if(p->lc!='\0')
        {
            p=p->lc;
        }
        else
        {
            p=s[top--];
            //top--;
        }
    }
}
void inOrder()
{
    int f=0,s[20],top=-1;
    if(root=='\0')
    {
        printf("The tree is empty");
        return;
    }
    node *p=root;
    while(p!='\0')
    {
        if(p->lc!='\0' && f==0)
        {
            s[++top]=p;//par
            p=p->lc;
        }
        else
        {
            printf("%4d",p->data);//par
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
void deletion(int x)
{
    search(x);
    if(root=='\0')
    {
        printf("Tree is empty");
        return;
    }
    if(loc=='\0')
    {
        printf("not found can't delete");
        return;
    }
    if(loc->lc!='\0' && loc->rc!='\0')
    {
        delTwoChild();
        return;
    }
    if(loc->lc!='\0' || loc->rc!='\0')
    {
        delOneChild();
        return;
    }
    if(loc->lc=='\0' || loc->rc=='\0')
    {
        delLeaf();
    }
}
void delOneChild()
{
    if(loc==par->lc)
    {
        if(loc->lc!='\0')
            par->lc=loc->lc;
        else
            par->lc=loc->rc;
    }
    else
    {
        if(loc->lc!='\0')
            par->rc=loc->lc;
        else
            par->rc=loc->rc;
    }
    free(loc);
}
node* findMax(node *p)
{
    while(p->rc!='\0')
    {
        p=p->rc;
    }
    return p;
}
void delTwoChild()
{
    node *l=loc;
    node *p=findMax(loc->lc);
    l->data=loc->data;
    search(p->data);
    {
        if(p->lc!='\0')
            delOneChild();
        else
            delLeaf();
    }
    free(p);
}
void delLeaf()
{
    node *l;
    l=loc;
    par='\0';
    free(l);
}
void postOrder()
{
    if(root==NULL)
    {
        printf("The tree is Empty. ");
        return;
    }
    int n1=1,n2=1;
    node **s1,**s2,*p;
    s1=(node**)calloc(n1,sizeof(node));
    s2=(node**)calloc(n1,sizeof(node));
    int top1=-1,top2=-1;
    s1[++top1]=root;
    n1++;
    s1=(node**)realloc(s1,n1*sizeof(node));
    while(top1!=-1)
    {
        p=s1[top1--];
        n1--;
        s1=(node**)realloc(s1,n1*sizeof(node));
        s2[++top2]=p;
        n2++;
        s2=(node**)realloc(s2,n2*sizeof(node));
        if(p->lc!=NULL)
        {
            s1[++top1]=p->lc;
            n1++;
            s1=(node**)realloc(s1,n1*sizeof(node));
        }
        if(p->rc!=NULL)
        {
            s1[++top1]=p->rc;
            n1++;
            s1=(node**)realloc(s1,n1*sizeof(node));
        }
    }
    while(top2!=-1)
    {
        p=s2[top2];
        printf("%d ",p->data);
        top2--;
    }
    free(s1);
    free(s2);
}
void menu()
{
    printf("\nThe option are:- ");
    printf("\n1. search\n");
    printf("2. insert\n");
    printf("3. preorder\n");
    printf("4. inOrder\n");
    printf("5. deletion\n");
    printf("6. find max\n");
    printf("7. PostOrder\n");
    printf("Enter your choice");
}
int main()
{
    int ch,n,c;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                printf("Enter a no which you want to search");
                scanf("%d",&n);
                c=search(n);
                if(c=='\0')
                    printf("Not found");
                else
                    printf("Found");
                break;
            }
        case 2:
            {
                printf("Enter a no which you want to insert");
                scanf("%d",&n);
                insert(n);
                break;
            }
        case 3:
            {
                pre_Order();
                break;
            }
        case 4:
            {
                inOrder();
                break;
            }
        case 5:
            {
                printf("Enter a no which you want to delete");
                scanf("%d",&n);
                deletion(n);
                break;
            }
        case 6:
            {
                findMax(root);
                break;
            }
        case 7:
            postOrder();
            break;
        default:
            printf("Invalid your choice");
            break;
        }
    }
}
