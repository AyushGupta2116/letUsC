#include<stdio.h>
#include<math.h>
int main (){
double t,v,wcf;
printf ("enter the value of t and v");
scanf ("%lf %lf ",&t,&v);

    wcf = 35.74 + 0.6215 * (t)+(0.4275-35.75) * pow(v,0.16);
    printf ("wcf is :%d",wcf);
}