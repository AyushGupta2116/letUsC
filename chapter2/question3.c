#include<stdio.h>
#include<math.h>
int main (){
    double l1,l2,g1,g2,d;
    printf ("enter the value of number l1,l2,g1,g2");
    scanf ("%lf %lf %lf %lf",&l1,&l2,&g1,&g2);
    d = 3963 * acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));
    printf ("d is :%lf",d);

}