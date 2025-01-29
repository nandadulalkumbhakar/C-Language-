#include<stdio.h>
#include<string.h>
int main()
{
    int a[8],i,n;
    char c[3];
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<3;i++)
    {
        scanf("%c",&c[i]);
    }
    scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        if(a[4]==0)
        {
            if(a[5]%2==0)
                printf("not rain");
                return;
        }
        else
        {
            if(a[5]==0)
            {
                printf("not rain");
                return;
            }
            else if(a[5]==1)
            {
                if(a[7]%2==0)
                {
                    printf("not rain");
                    return;
                }

                else
                    printf("rain");
            }
            else
            {
                printf("not rain");
                return;
            }
        }
    }

}
