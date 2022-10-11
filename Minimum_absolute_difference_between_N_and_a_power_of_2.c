#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,l,u;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x=pow(2,i);
        if(n<=x)
        {
            break;
        }
    }
    l=pow(2,i-1);
    u=pow(2,i);
    //printf("%d %d %d",l,n,u);
    if(n==x)
    {
        printf("0");
    }
    else if(n-l>u-n)
    {
        printf("%d",u-n);
    }
    else
    {
        printf("%d",n-l);
    }
}