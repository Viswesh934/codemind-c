#include<stdio.h>
#include<math.h>
int main(){
    double p,r,t;
    double totalamount;
    scanf("%lf",&p);
    scanf("%lf",&r);
    scanf("%lf",&t);
    totalamount=p*(pow((1+(r/100)),t));
    
    printf("%.2lf",totalamount);
    
}