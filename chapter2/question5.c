#include<stdio.h>
#include<math.h>
int main(){
    double n,a,b,c,d,e,f;
    printf ("enter the value of angle ");
    scanf ("%lf",&n);
     a = sin(n);
     b = cos(n);
     c = tan(n);
     d = 1.0/cos(n);
     e = 1.0/sin(n);
     f = 1.0/tan(n);
     printf ("sin:%lf\n cos:%lf\n tan:%lf\n sec:%lf\n cosec:%lf\n cot:%lf ",a,b,c,d,e,f);

}