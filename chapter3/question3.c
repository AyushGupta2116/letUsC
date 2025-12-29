#include<stdio.h>
int main(){
    int s1,s2,s3,sum;
    printf ("enter the side of triangle ");
    scanf ("%d %d %d",&s1,&s2,&s3);
    sum = s1 + s2 + s3;
    if (sum==180){
        printf ("triangle is valid");
    }else {
        printf ("triangle is not valid");
    }


}