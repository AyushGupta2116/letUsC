#include<stdio.h>
int main (){
    int rem =0,n;
    printf ("enter the 5 digit number");
    scanf("%d",&n);
    while (n>0){
        rem = rem+ (n%10);
        n=n/10;
    }
    printf ("%d",rem);
}