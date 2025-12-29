#include<stdio.h>
int main (){
    double x,y;
    printf ("enter the value of x,y");
    scanf("%lf %lf",&x,&y);
    if (x>0 && y>0){
        printf ("points lies in 1 quad");
    }else if (x>0 && y<0){
        printf ("points lies in 2 quad");
    }else if (x<0 && y<0){
        printf ("points lies in 3 quad");
    }else if (x<0 && y>0){
        printf ("points lies in 4 quad");
    }

    
}