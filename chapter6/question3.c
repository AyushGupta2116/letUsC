#include<stdio.h>
#include<math.h>
int main(){
    double p,q,r,n,a;
    for (int i=1;i<=10;i++){
        printf ("enter the value of p,r,n,q");
        scanf("%lf %lf %lf %lf",&p,&r,&n,&q);
        a = pow ((p * (1+r/q)),(n*q));
        printf ("total amount is:%lf\n",a);
    }
}