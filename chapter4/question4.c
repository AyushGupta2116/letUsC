#include<stdio.h>
int main(){
    double weight,height,bmi;
    bmi = weight/height;
    printf ("enter the value of weight,height");
    scanf("%lf %lf",&weight,&height);
    if (bmi<15){
        printf ("starvation");
    }else if (bmi>15.1 && bmi< 17.5){
        printf("anorexic");
    }else if (bmi>17.6 && bmi<18.5){
        printf ("underwieght");
    }else if (bmi>25 && bmi<25.9){
        printf("overweight");
    }else if (bmi>30 && bmi<30.9){
        printf ("obese");
    }else{
        printf("morbidly obese");
    }
}