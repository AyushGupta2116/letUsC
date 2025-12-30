#include<stdio.h>
int main(){
    double s1,s2,s3;
    printf ("enter the side of the triangle ");
    scanf("%lf %lf %lf",&s1,&s2,&s3);
    if (s1==s2 || s1==s3 || s2==s3){
        printf ("isoscales triangle");
    }else if (s1==s2==s3){
        printf ("equilateral triangle");
    }else if (s1 != s2 != s3){
        printf ("scalen triangle");
    }
}