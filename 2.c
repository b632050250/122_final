#include<stdio.h>
int main()
{
    int n,i,j,max=0,p=1;
    scanf("%d",&n);
    if(n>1&&n<1001)
    {
        int a[n],b[10000]={0},c[10000]={0},m[n];
    for(i=1; i<=10000; i++)
    {
        b[i]=i;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=10000; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                printf("%d ",a[j]);
                c[i]++;
            }
        }
    }
    for(i=1; i<=10000; i++)
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
    }
    return 0;
}
