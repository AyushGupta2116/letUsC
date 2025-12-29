#include<stdio.h>
int main(){
    int number,r;
    printf ("enter the value of any number");
    scanf("%d",&number);
    if (number<0){
        number = -number;
    }
    r = number - 0 ;
    printf ("%d",r);

}