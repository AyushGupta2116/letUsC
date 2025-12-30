#include <stdio.h>
int main() {
    int n, val; 
    int count = 0, count1 = 0, count2 = 0;

    printf("enter the numbers");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter value ");
        scanf("%d", &val); 

        if (val > 0) {
            count++;
        } else if (val < 0) {
            count1++;
        } else {
            count2++;
        }
    }

    printf("Positive no: %d\n Negative no: %d\n  Zeroes: %d\n",count,count1,count2);
    
    return 0;
}