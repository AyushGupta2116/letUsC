// #include<stdio.h>
// void change(float kg, float *gram ,float *pound) {
//     *gram = 1000 * kg;    
//     *pound = 2.20462 * kg;
// }

// int main(){
//     float kg, gram, pound;

//     printf ("enter the weight in kilogram\n");
//     scanf("%f",&kg);
    
//     change(kg, &gram, &pound);
//     printf("%f\n%f",gram,pound);
//     return 0;
// }


#include<stdio.h>
int power(int a, int b) {
    int res;
    if(b == 0) {
        return 1;
    }
    res = a * power(a, b-1);
    printf("%d\n", res);
    return res;
}

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int res = power(a,b);
    printf("%d", res);
    return 0;
}


