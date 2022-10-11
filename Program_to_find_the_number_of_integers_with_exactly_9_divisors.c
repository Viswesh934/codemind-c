#include<stdio.h>
int main()
{
    int n,c=0,i,j,f=0,total;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                c+=1;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            f+=1;
        }
    }
    printf("
Total=%d",f);
}