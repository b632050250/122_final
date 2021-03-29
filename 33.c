#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,k,m;
    scanf("%d %d %d",&a,&b,&c);
    k=a-1;
    m=0;
    char d[a][a];
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            scanf("%d",d[i][j]);
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            c=c+d[i][j]+d[j][i]+d[i][i]+d[m][k];
            k--;
            m++;
        }
        k=a-1;
        m=0;
    }
    printf("%d",c);
    return 0;
}
