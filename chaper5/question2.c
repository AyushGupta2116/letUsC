#include <stdio.h>

int main() {
    int temp, remainder, sum;

    for (int i = 0; i <= 500; i++) {
        sum = 0;
        temp = i; 
        while (temp > 0) {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}