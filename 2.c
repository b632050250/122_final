#include<stdio.h>
int main()
{
    int n,i,j,max=0,p=1;
    scanf("%d",&n);
    int a[n],b[1000]={0},c[1000]={0},m[n];
    for(i=0; i<=1000; i++)
    {
        b[i]=i;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=1000; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                c[i]++;
            }
        }
    }
    for(i=0; i<=1000; i++)
    {
        if(max<c[i])
        {
            max=c[i];
            m[0]=i;
        }
        else if(max==c[i]&&max!=0)
        {
            m[p]=i;
            p++;
        }
    }
    for(i=0; i<p; i++)
    {
        printf("%d ",m[i]);
    }
    return 0;
}
