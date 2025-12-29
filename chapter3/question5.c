#include<stdio.h>
int main(){
    double area,peri,l,b;
    printf ("enter the value of l and b");
    scanf("%lf %lf",&l,&b);
    area = l*b;
    peri = 2 * (l+b);
    if (area>peri){
        printf("area is greater");
    }else {
        printf("peri is greater");
    }
}