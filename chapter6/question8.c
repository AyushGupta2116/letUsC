
#include<stdio.h>
int main(){
    for (int i=1;i<=24;i++){
        if (i>0 && i<13){
            printf ("time is:%d:00 morning(AM)\n",i);
        }else if (i>12 && i<19){
            printf("time is:%d:00 aftenoon(PM)\n ",i);
        }else if (i>18 && i<23){
            printf ("time is:%d night(PM)\n ",i);
        }else {
            printf ("midnight");
        }
        printf("\n");
    }
}