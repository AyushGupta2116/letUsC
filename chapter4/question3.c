#include<stdio.h>
int main(){
    double hardness,carbon,tensile;
    printf ("enter the value of h,c,t");
    scanf("%lf %lf %lf",&hardness,&carbon,&tensile);
    if (hardness>50.0 && carbon<0.7 && tensile>5600.0){
        printf ("grade 10");
    }else if (hardness>50.0 && carbon<0.7 && tensile<5600.0){
        printf ("grade 9");
    }else if (hardness<50.0 && carbon<0.7 && tensile>5600.0){
        printf ("grade 8");
    }else if (hardness>50.0 && carbon>0.7 && tensile>5600.0){
        printf ("grade 7");
    }else if (hardness<50.0 && carbon>0.7 && tensile>5600.0){
        printf ("grade 5");
    }else if (hardness>50.0 && carbon>0.7 && tensile<5600.0 || hardness<50.0 && carbon<0.7 && tensile<5600.0 || hardness<50.0 && carbon>0.7 && tensile>5600.0){
        printf ("grade 6");
    }
}