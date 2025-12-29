#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf ("enter the ages of ram , shyam & ajay");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if (ram>shyam && ram>ajay){
        printf ("ram is eldest");
    }else if (shyam>ram && shyam>ajay){
        printf("shyam is eldest");

    }else if(ajay>ram && ajay>shyam){
        printf ("ajay is eldest");
    }
}