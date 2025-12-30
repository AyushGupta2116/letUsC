#include<stdio.h>
#include<math.h>
int main(){
    int n,m=0,i=0,num;
    printf ("enter the value of number");
    scanf("%d",&n);
    while(n>0){
        num = n%8;
        m = m + num *pow(10,i);
        n = n/8;
        i++;
    }
printf ("%d",m);
    }
