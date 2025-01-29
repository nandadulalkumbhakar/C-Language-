#include<stdio.h>
int main()
{
    int x,a[5],min,secMin,i,c=0,secMax,max;
    scanf("%d",&x);
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    if(x%2!=0)
    {
        for(i=0;i<5;i++)
        {
            if(a[i]%2==0)
                c++;
        }
        if(c==5)
        {
            printf("Impossible");
            return 0;
        }
    }
    if(a[0]<a[1])
    {
        min=a[0];
        secMin=a[1];
    }
    else
    {
        min=a[1];
        secMin=a[0];
    }
    for(i=2;i<5;i++)
    {
        if(a[i]<secMin)
        {
            if(a[i]<min)
            {
                secMin=min;
                min=a[i];
            }
            else
            {
                secMin=a[i];
            }
        }
    }
    if(a[0]<a[1])
    {
        secMax=a[0];
        max=a[1];
    }
    else
    {
        secMax=a[1];
        max=a[0];
    }

    for(i=2;i<5;i++)
    {
        if(a[i]>secMax)
        {
            if(a[i]>max)
            {
                secMax=max;
                max=a[i];
            }
            else
            {
                secMax=a[i];
            }
        }
    }
    for(i=1;i<=5;i++)
    {
        if(min*i+secMin==x)
        {
            printf("%d %d",min,secMin);
            return 0;
        }
    }
    for(i=1;i<=5;i++)
    {
        if(min*i+secMax==x)
        {
            printf("%d %d",min,secMax);
            return 0;
        }
        if(min*i+max==x)
        {
            printf("%d %d",min,max);
            return 0;
        }
    }
    return 0;
}
