#include<stdio.h>
int main()
{
    int x,y,r,c,co,n;
    scanf("%d%d",&x,&y);
    for(;x<=y;x++)
    {
        n=x;
        co=0;
        c=0;
        while(n)
        {
            r=n%10;
            n/=10;
            co++;
            if(r==0)
            break;
            if(x%r==0)
            c++;
        }
        if(c==co)
        {
            printf("%d ",x);
        }
    }
}