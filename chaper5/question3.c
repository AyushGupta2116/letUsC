#include <stdio.h>

int main() {
    int matchstick = 21;
    int number, computer;

    while (1) {
        printf("Total matchsticks left: %d\n", matchstick);
        printf("Your turn Pick matchsticks : ");
        
        scanf("%d", &number);
        if (number>4 || number<1){
            printf ("invalid pickup");
            continue;
        }

        computer = 5 - number;
        printf("Computer picks: %d matchsticks\n", computer);
        matchstick = matchstick - 5;
        if (matchstick == 1) {
            printf("Total matchsticks left: 1\n");
            printf("You are forced to pick the last stick.\n");
            printf("YOU LOSE!\n");
            break;
        }
    }
    return 0;
}