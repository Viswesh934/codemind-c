#include<stdio.h>
int main()
{
    int i,t,n,r,sum=0;
    long int fact=1;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        fact=1;
        i=1;
        while(i<=r)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        t=t/10;
    }
    if(sum==n)
    {
       printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
    return 0;
}