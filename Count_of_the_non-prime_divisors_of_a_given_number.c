#include<stdio.h>
int main()
{
    int n,count=0,i,j,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }
        }
        if(count!=2&&count>0)
        {
            m++;
        }

    }
    printf("%d",m);
    return 0;
}