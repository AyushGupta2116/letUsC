#include<stdio.h>
#include<math.h>
int main (){
    double x,y,r,fi;
    printf ("enter the value of x,y");
    scanf ("%lf %lf",&x,&y);
    r = sqrt(x*x + y*y);
    fi = atan(y/x);
    printf ("r is :%lf\n fi is:%lf",r,fi);

}