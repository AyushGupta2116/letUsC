#include<stdio.h>
int main(){
    int number,rem=0,orignal;
    printf ("enter the value of 5 digit number");
    scanf ("%d",&number);
    orignal = number;
    while (number>0){
        rem = rem *10 + number%10;
        number = number/10;
    }if (orignal==number){
        printf ("true");

    }else {
        printf ("false");
    }
}