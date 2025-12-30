#include<stdio.h>
#include<math.h>
int main(){
    double degree , radians,sum;
    printf ("enter the value of angle");
    scanf("%lf",&radians);
    degree = radians * (180/3.14);
    sum = sin(degree)* sin(degree) + cos(degree) * cos(degree);
    if (sum==1){
        printf ("true");
    }else{
        printf("false");
    }


}