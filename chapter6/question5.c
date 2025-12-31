#include <stdio.h>
#include <math.h> 

int main() {
    for (int i = 1; i <= 30; i++) {
        for (int j = i; j <= 30; j++) {
            int m = i*i + j*j;
            int k = sqrt(m);

            if ( k*k == m) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}