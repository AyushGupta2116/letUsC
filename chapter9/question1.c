#include<stdio.h>


int swap(int *x,int *y,int *z){
    *x =10;
    *y = 5;
    *z =8;

}
int main(){
    int x=5,y=8,z=10,swap;
     swap(&x,&y,&z);
    printf ("%d\n %d\n %d\n",x,y,z);
}