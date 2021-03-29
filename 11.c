#include<stdio.h>
int main()
{
    int n,c,k;
    scanf("%d %d",&n,&c);
    if(n>0&&n<32750)
    {
        k=n+1;
        while(k!=0)
        {
            if(k%10==c)
            {
                k=n+1;
                break;
            }
            else
            {
                k/=10;
                if(k==0)
                {
                    n++;
                    k=n+1;
                }
            }
        }
        printf("%d",k);
    }
    return 0;
}
