#include<stdio.h>
#include<math.h>
int main(){
     double a,x,m;
    printf ("enter the value of x");
    scanf("%lf",&x);
     m = (x-1)/x;
    a = m + 1/2 * pow(m,2) + 1/2 * pow(m,3) + 1/2 * pow(m,4) + 1/2 * pow(m,5) + 1/2 * pow(m,6) + 1/2 * pow(m,7);
    printf ("%lf",a);

}