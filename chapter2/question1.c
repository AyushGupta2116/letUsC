#include<stdio.h>
#include<math.h>
int power(int x,int y){
    int pwr;
    pwr = pow(x,y);
    return pwr;
}
int main (){
    int a=3,b=3,result;

    result = power(a,b);
    printf("power of a^b is %d",result);
    
}