#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (!((ch >= 'a' && ch <= 'z') || 
          (ch >= 'A' && ch <= 'Z') || 
          (ch >= '0' && ch <= '9'))) 
    {
        printf(" is a special symbol");
    } else {
        printf("not a special symbol");
    }

}