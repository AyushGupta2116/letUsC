#include <stdio.h>

int main() {
    char n;
    printf("Enter a character: ");
    scanf("%c", &n);

    if (n >= 'a' && n <= 'z') {
        printf("This is a small alphabet.\n");
    } else {
        printf("This is not a small alphabet.");
    }
}