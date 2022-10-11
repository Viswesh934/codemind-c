#include<stdio.h>
#include<math.h>
int main(){
    int n,a[1000];
    scanf("%d",&n);
    int i,j,temp;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}