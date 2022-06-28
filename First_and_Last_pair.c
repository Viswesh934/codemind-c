#include<stdio.h>
int main(){
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if (n%2==0){
        for(i=0;i<n/2;i++){
            printf("%d %d ",a[i],a[n-i-1]);
        }
    }
    else{
        for(i=0;i<n/2;i++){
            printf("%d %d ",a[i],a[n-i-1]);
        }
        printf("%d 0",a[n/2]);
    }
}


